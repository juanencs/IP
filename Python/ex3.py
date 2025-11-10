"""Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que
cada um deu para a realização da aposta. Faça um programa que receba quanto cada apostador investiu e o
valor do prêmio recebido. Ao final, e imprima quanto cada um ganhou do prêmio, com base no valor investido."""

premio_total = float(input("Insira o valor do prêmio: "))
amigo1 = float(input("Insira o valor investido pelo amigo 1: "))
amigo2 = float(input("Insira o valor investido pelo amigo 2: "))
amigo3 = float(input("Insira o valor investido pelo amigo 3: "))

#Valor total apostado pelos amigos
soma = amigo1 + amigo2 + amigo3

#Percentual de cada amigo na aposta
percent_amigo1 = amigo1 * 100 / soma
percent_amigo2 = amigo2 * 100 / soma
percent_amigo3 = amigo3 * 100 / soma

#Valor recebido com base no valor apostado
premio_amigo1 = premio_total * percent_amigo1 / 100
premio_amigo2 = premio_total * percent_amigo2 / 100
premio_amigo3 = premio_total * percent_amigo3 / 100

print (f"\nValor recebido pelo amigo 1: {premio_amigo1:.2f}")
print (f"Valor recebido pelo amigo 2: {premio_amigo2:.2f}")
print (f"Valor recebido pelo amigo 3: {premio_amigo3:.2f}")




