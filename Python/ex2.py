"""Sejam cat_a e cat_b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: √𝑎²+𝑏². Escreva
um programa que receba os valores de cat_a e cat_b e calcule o valor da hipotenusa usando a equação
fornecida. Ao final, imprima o resultado da operação."""

import math

cat_a = float(input("Insira o valor do cateto A: "))
cat_b = float(input("Insira o valor do cateto B: "))

hipotenusa = math.sqrt(cat_a ** 2 + cat_b ** 2)

print (f"\nValor da hipotenusa: {hipotenusa:.2f}")