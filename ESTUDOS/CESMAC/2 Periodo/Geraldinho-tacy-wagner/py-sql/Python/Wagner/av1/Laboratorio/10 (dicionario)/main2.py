inf = {
    "nome": input("Digite seu nome: "),
    "idade": input("Digite sua idade: "),
    "email": input("Digite seu email: "),
    "contato": input("Digite seu contato: ")
}

#print(inf.get("nome"))
#print(inf.get("idade"))
#print(inf.get("email"))
#print(inf.get("nome"))

print("Nome:", inf.get("nome"))
print("idade:", inf.get("idade"))
print("email:", inf.get("email"))
print("contato:", inf.get("contato"))