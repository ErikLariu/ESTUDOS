numero1 = float(input("Digite o primeiro numero: "))
numero2 = float(input("Digite o primeiro numero: "))
numero3 = float(input("Digite o primeiro numero: "))

if (numero1 > numero2 and numero3):
    print(numero1)
elif (numero2 > numero1 and numero3):
    print(numero2)
elif (numero3 > numero1 and numero2):
    print(numero3)
else:
    print("numeros iguais")