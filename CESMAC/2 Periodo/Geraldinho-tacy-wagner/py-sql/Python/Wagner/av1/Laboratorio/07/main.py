primeiro_numero = int(input("Digite o primeiro numero: "))
operacao = str(input("Digite a operação a ser realizada: "))
segundo_numero = int(input("Digite o segundo numero: "))

resultado = 0
 
if (operacao == '+'):
    resultado == primeiro_numero + segundo_numero
elif (operacao == '-'):
    resultado == primeiro_numero - segundo_numero
elif (operacao == 'x'):
    resultado = primeiro_numero * segundo_numero
elif (operacao == '/'):
    resultado = primeiro_numero / segundo_numero
elif (operacao == 'p'):
    resultado = primeiro_numero ** segundo_numero
else: 
    print("operação invalida.")

print(resultado)