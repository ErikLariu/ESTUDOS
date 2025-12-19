primeira_nota = float(input("Digite sua primeira nota: "))
segunda_nota = float(input("Digite sua segunda nota: "))
terceira_nota = float(input("Digite sua terceira nota: "))

media = (primeira_nota + segunda_nota + terceira_nota) / 3

if (media > 6):
    print("aprovado")
elif (media == 6):
    print("Final")
else:
    print("reprovado")