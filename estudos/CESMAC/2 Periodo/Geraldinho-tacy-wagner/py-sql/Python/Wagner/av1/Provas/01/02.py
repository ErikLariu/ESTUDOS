usuarios = [
    {"usuario": "isa", "senha": "isa12"},
    {"usuario": "joao", "senha": "abcd"},
    {"usuario": "maria", "senha": "4321"},
]

tentativas = 0
login_valido = 0

while not login_valido:

    usuario_login = input("Digite seu login: ")
    senha_login = input("Digite sua senha: ")

    for u in usuarios:
        if u["usuario"] == usuario_login and u["senha"] == senha_login:
            login_valido += 1
            break

    if login_valido == 1:
        print("Login valido!")
    else:
        print("Tente novamente")
        tentativas += 1

        if tentativas == 3: 
            print("Ultima tentativa")

        elif tentativas >= 4:
            print("Logins invalidos!")
            break
