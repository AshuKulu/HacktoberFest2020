import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import os
import random

cmd2="exit"
engine=pyttsx3.init()

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def greet():
    hours=datetime.datetime.now().hour
    if hours>=6 and hours<12:
        speak("Good Morning sir")
    elif hours>=12 and hours<18:
        speak("Good afternoon sir")
    else:
        speak("Good evening sir")
greet()
speak("WHAT CAN I DO FOR YOU?")

def command():
    r=sr.Recognizer()
    with sr.Microphone() as source:
        print("speak now..")
        r.pause_threshold= 0.8
        sound=r.listen(source)
    
    try:
        text=r.recognize_google(sound,language='en-in')
        print(f'user said: {text}')
        
    except:
        speak("sorry sir, could you repeat what you said? ")
        text=None
        command()
    return text




def jarvis(text):
    if 'search' in text.lower(): 
        speak('searching wikipedia....')
        text = text.replace('search',"")
        result= wikipedia.summary(text , sentences=1)
        speak('According to wikipedia.. ' + result)
    elif 'play music'  in text.lower():
        songs_dir="D:\\music"
        song=os.listdir(songs_dir)
        d=random.choice(song)
        os.startfile(os.path.join(songs_dir,d))
        print(d)

    elif "how are you" in text:
        speak("I am fine")
    
    elif 'sleep' in text.lower():
        speak("GOODBYE SIR..")
        exit()
    else:
        speak('Sorry sir..I am a prototype so please wait for further service...')

while 1:
    
    jarvis(command())
    speak("what else may i help you with???")


     


   
    



