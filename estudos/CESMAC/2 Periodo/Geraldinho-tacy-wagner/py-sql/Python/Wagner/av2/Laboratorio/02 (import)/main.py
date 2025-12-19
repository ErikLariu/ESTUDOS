import utils

numero1 = float(input("Digite o primeiro numero: "))
numero2 = float(input("Digite o segundo numero: "))

print("Opções: ")
print("A - SOMA \nB - SUBTRAÇÃO \nC - MUTIPLICAÇÃO \nD - DIVISÃO \nE - ELEVAÇÃO")

while True:
    opcao = input("Digite a opção: ").lower()

    if opcao in ['a', 'b', 'c', 'd', 'e']:
        break
    print("Opção Incorreta")

match opcao: 
    case 'a':
        resultado = utils.soma(numero1, numero2)
        print(f"Resultado: {resultado}")
    case 'b':
        resultado = utils.subtracao(numero1, numero2)
        print(f"Resultado: {resultado}")
    case 'c':
        resultado = utils.multiplicacao(numero1, numero2)
        print(f"Resultado: {resultado}")
    case 'd':
        resultado = utils.divisao(numero1, numero2)
        print(f"Resultado: {resultado}")
    case 'e':
        resultado = utils.elevacao(numero1, numero2)
        print(f"Resultado: {resultado}")