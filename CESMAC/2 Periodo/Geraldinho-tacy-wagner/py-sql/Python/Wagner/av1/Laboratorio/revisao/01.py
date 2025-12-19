numero_max = int(input("digite um valor: "))

pares = []
impares = []

for i in range(1, numero_max + 1):
    if i % 2 == 0:
        pares.append(i)
    else:
        impares.append(i)

print(f"Numeros pares: {pares}")
print(f"Numeros impares: {impares}")