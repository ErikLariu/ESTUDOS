def login(email, senha):
    if email == 'admin' and senha == 'admin':
        return True

while True: 
    email = input("Digite seu email: ").lower()
    senha = input("Digite sua senha: ").lower()

    login_valido = login(email, senha)

    if login_valido == True:
        print("Login valido!")
        break
    
    print("Digite novamente")