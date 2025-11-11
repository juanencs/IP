vetor = []

print("Digite 5 numeros inteiros:")
for i in range(5):
    numero = int(input(f"Elemento {i + 1}: "))
    vetor.append(numero)

print("\nElementos do vetor:")
for elemento in vetor:
    print(elemento, end=" ")

print()