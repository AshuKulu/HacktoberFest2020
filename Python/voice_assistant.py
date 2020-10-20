#importing the libraries
import speech_recognition as sr
import os
from gtts import gTTS
import datetime
import warnings
import calendar
import random
import wikipedia
#import playsound

#ignore warning messages
warnings.filterwarnings('ignore')

#record audio and return as string
def recordAudio():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print('To start me say : "WAKE UP ASSISTANT" and then your query')
        audio = r.listen(source)

    data = ''
    try:
        data = r.recognize_google(audio)
        print('You said : '+ data)
    except sr.UnknownValueError:
        print('Assistant could not understand what you said !')
    except sr.RequestError as e:
        print('Request result from Assistant Service Error --> '+ e)
    
    return data


#to get the virtual assistant response
def assistantResponse(text):
    print(text)

    #convert text to speech
    myobj = gTTS(text = text, lang='en', slow=False)

    #save the converted audio file
    myobj.save('assistant.mp3')

    #play it
    os.system('start assistant.mp3')


#wake words or phrases
def wakeWord(text):
    WAKE_WORDS = ['wake up assistant']
    
    text = text.lower()

    #check if the user command has the wake word
    for phrase in WAKE_WORDS:
        if phrase in text:
            return True
    
    return False

#to get the current date
def getDate():
    now = datetime.datetime.now()
    my_date = datetime.datetime.today()
    weekday = calendar.day_name[my_date.weekday()]
    monthNum = now.month
    year = now.year
    dayNum = now.day

    #A list of month names
    month_names = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December']

    #A list of ordinal numbers
    ordinalNumbers = ['1st', '2nd', '3rd', '4th', '5th', '6th', '7th', '8th', '9th', '10th', '11th', '12th', '13th', '14th', '15th', '16th', '17th', '18th', '19th', '20th', '21st', '22nd', '23rd', '24th', '25th', '26th', '27th', '28th', '29th', '30th', '31st']

    return 'Today is ' + weekday +', '+ ordinalNumbers[dayNum-1] + ' ' + month_names[monthNum-1] + ' ' + str(year) + '. '

#random greetings
def greetings(text):

    #greeting inputs by user
    GREETING_INPUTS = ['wake up']

    #greeting responses from system
    GREETING_RESPONSES = ['howdy', 'hello', 'hey there', 'hi']

    #if user gives a greeting, system responds with a randomly chosen greeting
    for word in text.split():
        if word.lower() in GREETING_INPUTS:
            return random.choice(GREETING_RESPONSES) + ' .'
    
    return ''

#getting persons first and last name from text
def getPerson(text):

    wordList = text.split()


    for i in range(0, len(wordList)):
        if i + 3 <= len(wordList) - 1 and wordList[i].lower() == 'who' and wordList[i+1].lower() == 'is':
            return wordList[i+2] + ' ' + wordList[i+3]


while True:

    #record audio
    text = recordAudio()
    response = ''
    
    #checking for wake word
    if(wakeWord(text) == True):
        
        #check for greetings by the user
        response = response + greetings(text)
        #print('you said the wake word')

        #check for date
        if ('date' in text):
            get_date = getDate()
            response = response + ' ' + get_date
        

        #check for time
        if ('time' in text):
            now = datetime.datetime.now()
            meridiem = ''
            if now.hour >= 12:
                meridiem = 'p.m'
                hour = now.hour - 12
            else:
                meridiem = 'a.m'
                hour = now.hour
            
            #convert minute to string
            if now.minute < 10:
                minute = '0' + str(now.minute)
            else:
                minute = str(now.minute)
            
            response = response + ' ' + 'It is ' + str(hour) + ':' + minute + ' ' + meridiem

        #check if user said 'who is'
        if ('who is' in text):
            person = getPerson(text)
            wiki = wikipedia.summary(person, sentences=2)
            response = response + ' ' + wiki
        
        
        #assistant responding via audio

        
        assistantResponse(response)