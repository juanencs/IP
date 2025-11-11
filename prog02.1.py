idade = int(input("Digite sua idade: "))

if idade < 6:
    categoria = "crianca"
elif idade < 18:
    categoria = "estudante"
elif idade < 60:
    categoria = "adulto"
else:
    categoria = "idoso"

match categoria:
    case "crianca":
        print("Nao paga passagem (crianca).")
    case "estudante":
        print("Paga meia passagem (estudante).")
    case "adulto":
        print("Paga passagem inteira.")
    case "idoso":
        print("Nao paga passagem (idoso).")
    case _:
        print("Categoria invalida.")