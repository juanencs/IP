"""Escreva um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se o valor
da parcela for maior que 20% do salário, imprima: ''Empréstimo não concedido!'', caso contrario imprima: “
''Emprestimo concedido''."""

salario = float(input("Insira o seu salário: "))
prestacao = float(input("Insira o valor da prestação: "))

if prestacao > salario*0.2:
    print ("\nEmpréstimo não concedido!")
else:
    print ("\nEmpréstimo concedido!")