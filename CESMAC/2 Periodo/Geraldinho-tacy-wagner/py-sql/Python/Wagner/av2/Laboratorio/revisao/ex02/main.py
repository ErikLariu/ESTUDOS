def calcular_desconto(valor, desconto):
    x = valor * desconto / 100 
    preco_final = valor - x
    return preco_final

desconto = 10

valor = float(input("Digite o valor: "))

desconto_10 = calcular_desconto(valor, desconto)
print(desconto_10)