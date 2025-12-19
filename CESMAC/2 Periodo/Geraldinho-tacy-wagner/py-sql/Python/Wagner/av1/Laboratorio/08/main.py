usuario_base = 'admin'
senha_base = 'admin'

tentativas = 0

while tentativas > 3:
    usuario = str(input("digite seu usuario: "))
    senha = str(input("digite seu usuario: "))
    if usuario == usuario_base and senha == senha_base:
        print("logado com sucesso")
    elif usuario == usuario_base and senha != senha_base:
        tentativas += 1
    elif usuario == usuario_base and senha == senha_base:
        print("Usuario incorreto")