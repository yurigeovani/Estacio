import os
 
restaurantes = ['Burger King']
 
 
def exibir_nome_do_programa():
    print("""
           
        ╔═══╗─────╔╗──────────────╔╗───────╔════╗───────╔╗
        ║╔═╗║────╔╝╚╗────────────╔╝╚╗──────║╔╗╔╗║──────╔╝╚╗
        ║╚═╝╠══╦═╩╗╔╬══╦╗╔╦═╦══╦═╬╗╔╬══╦══╗╚╝║║╠╩═╦╗╔╦═╩╗╔╬╦══╦══╦══╗
        ║╔╗╔╣║═╣══╣║║╔╗║║║║╔╣╔╗║╔╗╣║║║═╣══╣──║║║║═╣╚╝║╔╗║║╠╣╔═╣╔╗║══╣
        ║║║╚╣║═╬══║╚╣╔╗║╚╝║║║╔╗║║║║╚╣║═╬══║──║║║║═╣║║║╔╗║╚╣║╚═╣╚╝╠══║
        ╚╝╚═╩══╩══╩═╩╝╚╩══╩╝╚╝╚╩╝╚╩═╩══╩══╝──╚╝╚══╩╩╩╩╝╚╩═╩╩══╩══╩══╝
        """)
 
def exibir_opcoes():
    print('1. Cadastrar restaurante')
    print('2. Listar restaurante')
    print('3. Ativar restaurante')
    print('4. Sair\n')
 
 
def finalizando_app():
    os.system('clear')
    print('Finalizando o app')
   
def opcao_invalida():
    print('Opção Inválida!\n')
    exibir_opcoes()
   
def cadastrar_novo_restaurante():
    os.system('clear')
    print('Cadastro de novos restaurantes\n')
    nome_do_restaurante = input('Digite o nome do restaurante que deseja cadastrar: ')
    restaurantes.append(nome_do_restaurante)
    print(f'O restaurante {nome_do_restaurante} foi cadastrado com sucesso!')
    input('Digite uma tecla para voltar ao menu principal')
    main()
   
   
def escolher_opcao():
    try:
        opcao_escolhida = int(input('Escolha uma opção '))

        if opcao_escolhida == 1:
            cadastrar_novo_restaurante()
        elif opcao_escolhida == 2:
            print('Listar restaurantes')
        elif opcao_escolhida == 3:
            print('Ativar restaurantes')
        elif opcao_escolhida == 4:
            finalizando_app()
        else:
            opcao_invalida()
    except:
        opcao_invalida()        
   
   
def main():
    os.system('clear')
    exibir_nome_do_programa()
    exibir_opcoes()
    escolher_opcao()
 
if __name__ == '__main__':
    main()