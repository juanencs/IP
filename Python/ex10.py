"""Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um
dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou
zero."""
import math

N = 1

while N > 0:
    N = int(input("Insira um valor: "))

    if N <= 0:
        break
    
    quadrado = N ** 2
    cubo = N ** 3
    raizq = math.sqrt(N)

    print (f"\nQuadrado: {quadrado}")
    print (f"Cubo: {cubo}")
    print (f"Raiz quadrada: {raizq}")
    print()



