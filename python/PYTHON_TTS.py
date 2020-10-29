import pyttsx3

a=str(input("Enter the text to be spoken:"))
print(a)

engine = pyttsx3.init()


"""RATE"""
rate = engine.getProperty('rate')   # getting details of current speaking rate
print (rate)                        #printing current voice rate
engine.setProperty('rate', 100)     # setting up new voice rate


"""VOLUME"""
volume = engine.getProperty('volume')   #getting to know current volume level (min=0 and max=1)
print (volume)                          #printing current volume level
engine.setProperty('volume',5.0)    # setting up volume level  between 0 and 1


"""SPEECH"""
engine.say("The woods are lovely dark and deep but I have a promise to keep and miles to go before I sleep")

"""INCREASED RATE"""
rate = engine.getProperty('rate')
print('rate')
engine.setProperty('rate', 130)

engine.say("You better lose yourself in the music the moment you own it you better never let it go , you only get one shot do not miss your chance to blow this opputunity comes once in a lifetime")
engine.say(str(a))
engine.runAndWait()

engine.stop()
