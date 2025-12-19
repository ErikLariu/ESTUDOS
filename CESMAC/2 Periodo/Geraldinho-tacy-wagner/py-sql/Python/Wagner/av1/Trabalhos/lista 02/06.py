while True:
    numero = int(input("Digite um numero de 0 a 1000: "))
    
    if 0 <= numero <= 1000:
        print(f"numero valido: {numero}")
        break
    else:
        print("numero invalido")