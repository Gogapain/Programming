print("Введите число3 возводимое в степень, и степень числа")
a = float(input())
n = int(input())
result = 1.0

for i in range(abs(n)):
    result *= a

if n < 0:
    result = 1 / result

print(result)
