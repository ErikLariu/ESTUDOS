respostas = 0

pergunta1 = str(input("telefonou para vitima? (S/N): ")).lower()
if pergunta1 == 's':
    respostas += 1

pergunta2 = str(input("Esteve no local do crime? (S/N): ")).lower()
if pergunta2 == 's':
    respostas += 1

pergunta3 = str(input("Mora perto da vítima? (S/N): ")).lower()
if pergunta3 == 's':
    respostas += 1

pergunta4 = str(input("Devia para a vítima? (S/N): ")).lower()
if pergunta4 == 's':
    respostas += 1

pergunta5 = str(input("Já trabalhou com a vítima? (S/N): ")).lower()
if pergunta5 == 's':
    respostas += 1

if respostas == 2:
    print("suspeito")
elif 3 <= respostas <= 4:
    print("cumplice")
elif respostas == 5:
    print("assasino")
else:
    print("inocente")