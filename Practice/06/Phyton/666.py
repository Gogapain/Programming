import math

print("Введите 3 вещественных числа")

a = int(input())
b = int(input())
c = int(input())

if a == 0:
    if b == 0:
        print("Корней нет.")
    else:
        print("x =", -c / b)
else:
    d = b**2 - 4*a*c
    if d < 0:
        print("Корней нет.")
    elif d == 0:
        print("x =", -b/(2*a))
    else:
        d_sqrt = math.sqrt(d)
        x1 = (-b + d_sqrt) / (2 * a)
        x1 = (-b - d_sqrt) / (2 * a)
        print("x1 =", x1,"x2 =", x2)
