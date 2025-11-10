"""Escreva um programa que solicite ao usuário para digitar três valores inteiros e imprimir a soma dos seus cubos. 
Use o operador apropriado para exponenciação."""

print ("Insira 3 valores inteiros.\n")
num1 = int(input("Insira o primeiro valor: "))
num2 = int(input("Insira o segundo valor: "))
num3 = int(input("Insira o terceiro valor: "))

cubo1 = num1 ** 3
cubo2 = num2 ** 3
cubo3 = num3 ** 3

print (f"\nCubo de {num1}: {cubo1}")
print (f"Cubo de {num2}: {cubo2}")
print (f"Cubo de {num3}: {cubo3}")

