idade = int(input("Digite sua idade: "))

if idade < 18:
    if idade < 6:
        print("Nao paga passagem (crianca).")
    else:
        print("Paga meia passagem (estudante).")
else:
    if idade < 60:
        print("Paga passagem inteira.")
    else:
        print("Nao paga passagem (idoso).")