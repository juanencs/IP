"""Cálculo do custo de um carro ao consumidor baseado em: custo de fábrica, comissão do
distribuidor e impostos(comissão e impostos são baseados no custo de fábrica)."""

custo_fabrica = float(input("Insira o custo de fábrica: "))

if custo_fabrica <= 12000:
    custo_fabrica += custo_fabrica * 0.05

elif custo_fabrica > 12000 and custo_fabrica <= 25000:
    custo_fabrica += custo_fabrica * 0.25

elif custo_fabrica > 25000: 
    custo_fabrica += custo_fabrica * 0.35

custo_consumidor = custo_fabrica

print (f"\nO custo final do carro ao consumidor é: {custo_consumidor:.2f}")
