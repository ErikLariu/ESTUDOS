numero1 = int(input("Digite o primeiro numero: "))
numero2 = int(input("Digite o segundo numero: "))

while True:
    print("Opções: ")
    print("A - SOMA \nB - SUBTRAÇÃO \nC - MUTIPLICAÇÃO \nD - DIVISÃO")

    opcao = input("Digite a opção: ").lower()

    if opcao in ['a', 'b', 'c', 'd']:
        break

def soma(numero1, numero2):
    resultado = numero1 + numero2
    return resultado

def subtracao(numero1, numero2):
    resultado = numero1 - numero2
    return resultado

def multiplicacao(numero1, numero2):
    resultado = numero1 * numero2
    return resultado

def divisao(numero1, numero2):
    resultado = numero1 / numero2
    return resultado

match opcao:
    case 'a':
        print("Soma:", soma(numero1, numero2))
    case 'b':
        print("subtração:", subtracao(numero1, numero2))
    case 'c':
        print("mutiplicação:", multiplicacao(numero1, numero2))
    case 'd':
        print("Divisão:", divisao(numero1, numero2))
    