# dicionario = {}

inf = {
    "nome": "",
    "idade": "",
    "email": "",
    "contato": ""
}

inf["nome"] = input("Digite seu nome: ")
inf["idade"] = input("Digite sua idade: ")
inf["email"] = input("Digite seu email: ")
inf["contato"] = input("Digite seu contato: ")

print(inf.get("nome"))
print(inf.get("idade"))
print(inf.get("email"))
print(inf.get("contato"))