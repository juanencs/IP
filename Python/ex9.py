"""Sabendo que pessoa_01 tem 1.50 m de altura e cresce 2 centímetros por ano, enquanto pessoa_02 tem 1.10
m e cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários
para que pessoa_02 e seja maior que pessoa_01."""

altura1 = 1.5
altura2 = 1.1
i = 0

while altura2 <= altura1:
    i += 1
    altura1 += 0.02
    altura2 += 0.03

print (f"Pessoa 02 levaria {i} anos para ultrapassar a Pessoa 01")