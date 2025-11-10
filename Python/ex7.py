"""Programa que divide uma melancia que contém de 1 a 100 quilos, de forma que cada uma 
das duas partes pese um número par de quilos, embora não seja obrigatório que as partes 
sejam iguais"""

peso = float(input("Insira o peso da melancia: "))

if peso > 2 and peso <= 100 and peso % 2 == 0:
    print ("\nSIM")
else:
    print ("\nNÃO")