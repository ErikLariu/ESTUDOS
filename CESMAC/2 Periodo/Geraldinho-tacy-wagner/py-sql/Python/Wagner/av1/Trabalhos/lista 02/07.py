while True:
    nome = input("Digite seu nome: ")
    if len(nome) > 3:
        print(f"Nome valido: {nome}")
        break
    else:
        print("Nome invalido")

while True:
    idade = int(input("Digite sua idade (0 a 150): "))
    if 0 <= idade <= 150:
        print(f"Idade valido: {idade}")
        break
    else:
        print("Idade invalida")

while True:
    salario = float(input("Digite seu Salario: "))
    if salario > 0:
        print(f"Salario valido: {salario}")
        break
    else:
        print("Salario invalido")

while True:
    sexo = input("Digite seu sexo ('f' ou 'm'): ").lower()
    if sexo in ('f', 'm'):
        print(f"Sexo valido: {sexo}")
        break
    else:
        print("Sexo invalido! Tente novamente.")

while True:
    estado_civil = input("Digite seu estado civil ('s', 'c', 'v', 'd'): ").lower()
    if estado_civil in ('s', 'c', 'v', 'd'):
        print(f"Estado civil valido: {estado_civil}")
        break
    else:
        print("Estado civil invalido! Tente novamente.")