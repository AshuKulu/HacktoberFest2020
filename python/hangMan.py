//guess the correct marvel or DC character
import random


def initial_result(word):
    temp = []
    j = random.randint(0, len(word) - 1)
    for i in range(len(word)):
        if i == j:
            temp.append(word[i])
        else:
            temp.append('__')
    return temp


def printing(temp):
    for i in temp:
        print(i, end=' ')


def hint(word, temp):
    while True:
        i = random.randint(0, len(word)-1)
        if temp[i] == '__':
            temp[i] = word[i]
            break


def word_generator():
    x = random.randint(1, 5)
    if x == 1:
        dc = ['BOSTERGOLD', 'GREENARROW', 'JOHONCONSTANTINE', 'AQUAMAN', 'MARTIANMANHUNTER',
              'WONDERWOMAN', 'GREENLANTERN', 'FLASH', 'BATMAN', 'SUPERMAN']
        print('A HERO OF DC UNIVERSE ')
        i = random.randint(0, len(dc) - 1)
        return dc[i]
    if x == 2:
        dc_e = ['BLACKADAM', 'JOKER', 'DARKSIDE', 'DEATHSTROKE', 'RIDDLER',
                'DOOMSDAY', 'SINESTRO', 'PENGUIN', 'REDHOOD', 'BRAINIAC']
        i = random.randint(0, len(dc_e) - 1)
        print('A VILLAIN OF DC UNIVERSE  ')
        return dc_e[i]
    if x == 3:
        marvel = ['WOLVERINE', 'SPIDERMAN', 'THOR', 'IRONMAN', "HULK", 'CAPTAINAMERICA',
                  'DAREDEVIL', 'PUNISHER', 'DEADPOOL', 'SILVERSURFER', 'CYCLOPS', 'NIGHTCRAWLER',
                  'BUCKY', 'DOCTORSTRANGE', 'BLACKPANTHER', 'HAWKEYE', 'SCARLETWITCH', 'CAPTAINMARVEL',
                  'VISION', 'BLACKWIDOW', 'BLADE', 'NOVA', 'FALCON']
        i = random.randint(0, len(marvel) - 1)
        print('A HERO OF MARVEL UNIVERSE ')
        return marvel[i]
    if x == 4:
        marvel_e = ['DOCTORDOOM', 'MAGNETO', 'GREENGOBLIN', 'REDSKULL', 'LOKI', 'ULTRON', 'THANOS', 'GALACTUS',
                    'VENOM', 'DORMAMMU', 'JUGGERNAUT', 'DOCTOROCTOPUS', 'SANDMAN']
        i = random.randint(0, len(marvel_e) - 1)
        print('A VILLAIN OF MARVEL UNIVERSE ')
        return marvel_e[i]
    if x == 5:
        india = ['SHAKTIMAN', 'NAGRAJ', 'KRRISH', 'GONE', 'SHUBHAM', 'KANAV', 'NIRBHAY']
        i = random.randint(0, len(india) - 1)
        print('A HERO OF INDIA ')
        return india[i]


def the_game():
    print('BOOSTER : ', end=' ')
    word = word_generator()
    temp = initial_result(word)
    word_check = []
    for i in word:
        word_check.append(i)
    print("YOUR PUZZLE IS : ", end='')
    printing(temp)

    chance = len(word) + 5
    no_of_hints = 2
    print("\nYOU HAVE {} CHANCES FOR GUESSING THE CORRECT WORD ".format(chance))

    while chance > 0:

        if temp.count('__') > chance:
            print('\n NOT GONA MAKE IT BUDDY')
            print('\n\nBETTER LUCK NEXT TIME\nANSWER IS : {}'.format(word))
            break
        if temp == word_check:
            print("\n\n I CANT BELIEVE IT YOU WON ")
            break
        guess = input("\n\nyour guess : ").upper()
        print("\n{} CHANCES LEFT ".format(chance - 1))
        chance = chance - 1

        for i in range(len(word)):
            if word[i] == guess and temp[i] == '__':
                temp[i] = guess
                break
        printing(temp)
        if no_of_hints > 0 and chance > 1:
            HINT = input("\n{} Hints left Press Y for using IT "
                         "\n !!!WARNING!!! :IF U USE A HIN YOU WILL LOOSE EXTRA CHANCE "
                         .format(no_of_hints)).strip().lower()

            if HINT == 'y':
                hint(word, temp)
                printing(temp)
                chance = chance - 1
                no_of_hints = no_of_hints - 1

    else:
        print('\n\nBETTER LUCK NEXT TIME\nANSWER IS : {}'.format(word))




print("WELCOME GAMER IF YOU KNOW ABOUT HEROES THE SURPRISE ME\n")
the_game()
