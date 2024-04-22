import os
 
restaurantes = [ 'BK' , 'KFC', ]
 
 
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
 
 
def voltar_ao_menu_principal():
    input('Digite uma tecla para voltar ao menu principal')
    main()  
 
    #nova função
def opcao_invalida():
    print('Opção Invalidade!\n')
    voltar_ao_menu_principal()
   
    #nova função
def exibir_subtitulo(texto):    
    os.system('clear')
    print(texto)
   
   
def cadastrar_novo_restaurante():
    exibir_subtitulo('Cadastro de novos restaurantes\n')
   
    #print('Cadastro de novos restaurantes\n')
    nome_do_restaurante = input('Digite o nome do restaurante que deseja cadastrar: ')
    restaurantes.append(nome_do_restaurante)
    print(f'O restaurante {nome_do_restaurante} foi cadastrado com sucesso!')
    voltar_ao_menu_principal()
   
def listar_restaurantes():
    exibir_subtitulo('Listando os restaurantes')
   
    for restaurante in restaurantes:
        print(f'.{restaurante}')
        # print(restaurante)
    voltar_ao_menu_principal()
       
def escolher_opcao():
    try:
        opcao_escolhida = int(input('Escolha uma opção '))
        #print(f'Você escolheu a opção {opcao_escolhida})')
           
        if opcao_escolhida == 1:
            cadastrar_novo_restaurante()
        elif opcao_escolhida == 2:
            listar_restaurantes()
        elif opcao_escolhida == 3:
            print('Ativar restaurantes')
        elif opcao_escolhida == 4:
            finalizando_app()
        else:
            opcao_invalida()
    except:
        opcao_invalida()        
   
   
def main():
    os.system('cls')
    exibir_nome_do_programa()
    exibir_opcoes()
    escolher_opcao()
 
if __name__ == '__main__':
    main()    