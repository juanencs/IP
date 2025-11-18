n = int(input("Insira o valor de n: "))

if n < 1 or n > 10**6:
    print("Erro: n deve estar entre 1 e 1000000")
    exit()

sequence = []

while n >= 1:
    sequence.append(n)
    
    if n == 1:
        break
    
    if n % 2 == 0:
        n = n // 2
    else:
        n = n * 3 + 1

print(sequence)