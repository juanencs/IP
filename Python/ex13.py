"""Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro. Se o código
for 0 (zero), finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem
inversa. Caso o código for diferente de 1 e 2, escreva uma mensagem informando que o código é inválido."""

vetor = []

for i in range(5):
    numero = float(input(f"Insira o elemento {i + 1}: "))
    vetor.append(numero)

codigo = int(input("\nInsira o código: "))

if codigo == 0:
    print ("\nEncerrando programa...")
    exit()

elif codigo == 1:
    print ("\nVetor na ordem direta:")
    for numero in vetor:
        print (numero, end=" ")

elif codigo == 2:
    print ("\nVetor inverso:")
    vetor.reverse()
    for numero in vetor:    
        print (numero, end=" ")

else:
    print ("\nCódigo inválido!")