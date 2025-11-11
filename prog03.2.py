matriz = []

print("Digite os elementos da matriz 2x3:")
for i in range(2):
    linha = []  
    for j in range(3):
        valor = int(input(f"Elemento [{i}][{j}]: "))
        linha.append(valor)
    matriz.append(linha)  

print("\nMatriz digitada:")
for linha in matriz:
    for elemento in linha:
        print(elemento, end=" ")
    print()