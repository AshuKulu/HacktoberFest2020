#-*- coding: utf-8 -*-
import pyautogui
import time

# list of groups to post in facebook 
# you need to pull the list from facebook 
# https://fb-search.com/find-my-facebook-id => this web site coold help find the id 

groups = [

 841876035822775 ,
 836738426663271 ,
 815792475101290 ,
 786260384728785 ,
 744553512224440 ,
 741333485902625 ,
 738255552927796 ,
 737179656307688 ,
 718857021548441 ,
 710385779080272 ,
 692601284134675 ,
 679748465465684 ,
 669582349764070 ,
 638296612909834 ,
 627978833937228 ,
 624394987588211 ,
 621187304575862,
 610607705796412 ,
 602794983117761 ,
 589976124415271 ,
 573622429328316 ,
 558102994227182 ,
 544730432211862 ,
 541708529219847
]

# configure a time to sleep 
time.sleep(3)

pyautogui.keyDown('ctrl')
pyautogui.keyDown('t')
pyautogui.keyUp('t')
pyautogui.keyUp('ctrl')

for i in range(len(groups)):
    link = 'https://facebook.com/groups/'+str(groups[i])
    pyautogui.typewrite(link)
    pyautogui.typewrite('\n')

    print("Waiting for 15 seconds\n")
    time.sleep(10)

    pyautogui.typewrite('p')
    time.sleep(3)
    print("Writing post\n")
    #usar o hotkey para pegar o que esta na memória e postar como link
    # to post a link first copy the link to the memory using ctrl+c and leave it there
    pyautogui.hotkey('ctrl', 'v')
    #pyautogui.typewrite("Message")
    print("Time sleep 20 s")
    time.sleep(10)

    pyautogui.keyDown('ctrl')
    pyautogui.keyDown('enter')
    pyautogui.keyUp('enter')
    pyautogui.keyUp('ctrl')
    print("Time sleep 4s")
    time.sleep(4)

    pyautogui.write(['f6'])
    print("Time sleep 5s")
    time.sleep(5)
    #'''
   #pyautogui.keyDown('ctrl')
    #pyautogui.keyDown('t')
    #pyautogui.keyUp('t')
    #pyautogui.keyUp('ctrl')
    
    #'''
