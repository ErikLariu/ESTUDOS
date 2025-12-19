soma = 0

n1 = float(input("digite seu primeiro numero:"))
soma += n1
n2 = float(input("digite seu segundo numero:"))
soma += n2
n3 = float(input("digite seu terceiro numero:"))
soma += n3

numeros = [n1 , n2, n3]

maior = max(numeros)
menor = min(numeros)

print("maior numero:", maior)
print("menor numero:", menor)
print("soma:", soma)