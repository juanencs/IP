""" Escreva um programa que leia um número positivo do usuário, calcule e imprima a sequência
Fibonacci até o primeiro número superior ao número lido. Exemplo: se o usuário informou o número 30, a
sequência a ser impressa será 0 1 1 2 3 5 8 13 21 34."""

N = int(input("Insira o valor desejado para limitar a sequencia: "))

termo1 = 0
termo2 = 1
termo_atual = 0

print (termo1, end=' ')
print (termo2, end=' ')

while termo_atual <= N:
    termo_atual = termo1 + termo2
    print(termo_atual, end=' ')
    termo1 = termo2
    termo2 = termo_atual

print()