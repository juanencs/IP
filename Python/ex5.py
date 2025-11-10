"""A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três
notas mencionadas obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; e Exame Final: 5.
De acordo com o resultado, mostre na tela se o aluno está reprovado (media entre 0 e 3,9), de recuperação
(entre 4 e 5,9) ou se foi aprovado."""

nota_trabalho = float(input("Insira a nota do trabalho de laboratório: "))
nota_avaliacao = float(input("Insira a nota da avaliação semestral: "))
nota_exame = float(input("Insira a nota do exame final: "))

media = (nota_trabalho*2 + nota_avaliacao*3 + nota_exame*5) / 10.0

if media >= 0 and media < 4:
    print ("\nAluno reprovado!")
elif media >= 4 and media < 6:
    print ("\nAluno de recuperação!")
elif media >= 6 and media <= 10:
    print ("\nAluno aprovado!")
else:
    print ("\nMédia inválida!")