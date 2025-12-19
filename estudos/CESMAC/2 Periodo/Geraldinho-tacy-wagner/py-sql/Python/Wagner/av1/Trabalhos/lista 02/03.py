resposta = 's'

while resposta == 's':
    numero1 = float(input("Digite o primeiro numero: "))
    numero2 = float(input("Digite o segundo  numero: "))

    soma = numero1 + numero2 

    print("Resultado da soma:", soma)
    resposta = str(input("Deseja continuar calculando? (S/N): ")).lower()

print("FIM")

