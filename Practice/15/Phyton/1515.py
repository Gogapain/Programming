import random

while True:
    secret = int(random.random() * 101)
    win = False

    print("Введите ваше числоу")

    for i in range(5):
        guess = int(input())
        if guess > secret:
            print("Загаданное числоу меньше")
        elif guess < secret:
            print("Загаданное числоу больше")
        else:
            print("Вы выиграли!")
            win = True
            break

    if not win:
        print("Вы проиграли. Загаданное число:", secret)

    if not 1 == int(input("Хотите начать сначала? (1 - да)\n")):
        break

