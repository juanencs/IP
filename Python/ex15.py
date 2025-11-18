"""Escreva um programa que declara uma matriz 5x5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Ao final, imprima ao final a matriz obtida"""

matriz = []

for i in range(5):
    linha = []
    for j in range(5):
        if i == j:  
            linha.append(1)
        else:
            linha.append(0)
    matriz.append(linha)

print("Matriz com diagonal principal preenchida:")
for linha in matriz:
    print(linha)

print()