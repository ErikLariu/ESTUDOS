print("Digite 1 - Celsius para Fahrenheit ou 2- Fahrenheit para Celsius ou 3 - para sair")

opcao = float(input("opção: "))
if opcao == 1: 
    celsius = float(input("digite o valor:"))
    fahrenheit = 0
    fahrenheit = (celsius * 9/5) + 32
    print("Celsius para Fahrenheit:", fahrenheit)
elif opcao == 2:
    fahrenheit = float(input("Digite o valor: "))
    celsius = 0
    celsius = 5/9 * (fahrenheit - 32)
    print("Fahrenheit para Celsius:", celsius)
elif opcao == 3:
    print("saindo do programa... ")
else: 
    print("numero errado")


