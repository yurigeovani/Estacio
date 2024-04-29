import os
 
#restaurantes = [ 'BK' , 'KFC', ]
 
restaurantes = [{'nome': 'Cantina Toscana', 'categoria': 'Italiana', 'ativo': True},
                {'nome': 'Suchi da praça', 'categoria': 'Japonesa', 'ativo': False},
                {'nome': 'Churrascaria Gaúcha', 'categoria': 'Brasileira', 'ativo': True},
                {'nome': 'Padaria Pão Doce', 'categoria': 'Padaria', 'ativo': True}]
               
 
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
    input('Pressione o botão enter para voltar ou menu')
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
    nome_do_restaurante = input('Digite o nome do restaurante que deseja cadastrar: ')
    categoria = input(f'Digite o nome da categoria do restaurante: ')
    dados_do_restaurante = {'nome': nome_do_restaurante, 'categoria': categoria, 'ativo':False}
    restaurantes.append(dados_do_restaurante)
    print(f'O restaurante {nome_do_restaurante} foi cadastrado com sucesso!')
    voltar_ao_menu_principal()
   
   
def listar_restaurantes():
    exibir_subtitulo('Listando os restaurantes')
   
    for restaurante in restaurantes:
        nome_restaurante = restaurante['nome']
        categoria = restaurante['categoria']
        ativo = restaurante['ativo']
       
       
        print(f'--{nome_restaurante}-- | {categoria} | {ativo}'    )
       
    voltar_ao_menu_principal()
     
     
def alternar_estado_restaurante():
    exibir_subtitulo('Alternando o estado do restaurante')
   
    nome_restaurante = input('Digite o nome do restaurante que deseja altenar o estado:  ')
    restaurante_encontrado = False
   
    for restaurante in restaurantes:
        if nome_restaurante == restaurante['nome']:
            restaurante_encontrado = True
            restaurante['ativo'] = not restaurante['ativo']
            mensagem = f'O restaurante {nome_restaurante} foi ativado com sucesso' if restaurante['ativo'] else f'O restaurante {nome_restaurante} foi desativado com sucesso'
            print(mensagem)
    if not restaurante_encontrado:
        print('O restaurante não foi encontrado')        
    voltar_ao_menu_principal()    
     
     
def escolher_opcao():
    try:
        opcao_escolhida = int(input('Escolha uma opção '))
        #print(f'Você escolheu a opção {opcao_escolhida})')
           
        if opcao_escolhida == 1:
            cadastrar_novo_restaurante()
            #print('Cadastrar restaurante')
        elif opcao_escolhida == 2:
            listar_restaurantes()
           # print('Listar restaurantes')
        elif opcao_escolhida == 3:
            alternar_estado_restaurante()
           
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