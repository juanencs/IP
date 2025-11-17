"""Escreva um programa que preencha um vetor com 10 números reais, calcule e imprima a quantidade de
números negativos e a soma dos números positivos desse vetor"""

vetor = []
quant_negativo = 0
soma_positivo = 0

for i in range(10):
    numero = float(input(f"Insira o elemento {i + 1}: "))
    vetor.append(numero)
    if numero < 0:
        quant_negativo += 1
    elif numero > 0:
        soma_positivo += numero

print ("\nElementos do vetor: ")
for numero in vetor:
    print (numero, end=" ")

print (f"\n\nQuantidade de números negativos: {quant_negativo}")
print (f"Soma dos números positivos: {soma_positivo}")

print()