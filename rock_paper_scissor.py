from random import randint

objs = ["rock", "paper", "scissor"]

computer = objs[randint(0, 2)]

playing = True

while playing:
    player = input("Rock, Paper or Scissor ?    ")
    player = player.lower()
    if player == "rock":
        if computer == "scissor":
            print("You Won", player, "Beats", computer)
        elif computer == "paper":
            print("You Lose", computer, "Beats", player)
        else:
            print("DRAW")
    elif player == "paper":
        if computer == "rock":
            print("You Won", player, "Beats", computer)
        elif computer == "scissor":
            print("You Lose", computer, "Beats", player)
        else:
            print("DRAW")
    elif player == "scissor":
        if computer == "paper":
            print("You Won", player, "Beats", computer)
        elif computer == "rock":
            print("You Lose", computer, "Beats", player)
        else:
            print("DRAW")
    else:
        print("Check your spelling", end="\n")

    computer = objs[randint(0, 2)]
    key = input(
        """
    1. To keep Playing Press Enter
    2. To Quit Press input Q
    """
    )
    if key == "q" or key == 'Q':
        playing = False

print("Thank You For Playing!")

