# Importa o módulo random para gerar números aleatórios
import random
 
#Define a funçao jogar_novamente para verificar se o usuario deseja jogar novamente
def jogar_novamente():
    print('Deseja jogar novamente? (sim ou Não)')
    #Retorna verdadeiro se a resposta do usuario começar com 's', indicando sim
    return input().strip().lower().startswith('s')
 
#Inicia um loop infinito para repetir o jogo ate que jogador decida parar
while True:
 
 
    # Imprime uma linha de asteriscos para estilizar o cabeçalho do jogo
    print("***********************************")
    # Imprime uma mensagem de boas-vindas ao jogo
    print("Welcome to the Guessing Game!")
    # Imprime outra linha de asteriscos para finalizar o cabeçalho
    print("***********************************")
 
    # Gera um número secreto aleatoriamente entre 1 e 100 e o atribui à variável numero_secreto
    numero_secreto = random.randint(1, 100)
    # Define o total de tentativas que o jogador tem
    total_de_tentativas = 3
 
    # Inicia um loop que vai da primeira rodada até o total de tentativas + 1
    for rodada in range(1, total_de_tentativas + 1):
        # Imprime em qual tentativa o jogador está e o total de tentativas
        print(f"Tentativa {rodada} de {total_de_tentativas}")
       
        # Pede ao jogador para digitar um número e armazena a entrada como string
        chute_str = input("Digite um número entre 1 e 100: ")
        # Informa ao jogador qual número ele digitou
        print("Você digitou", chute_str)
        # Converte a entrada do jogador de string para inteiro
        chute = int(chute_str)
 
        # Verifica se o número digitado está fora do intervalo válido
        if chute < 1 or chute > 100:
            # Informa ao jogador que ele deve digitar um número dentro do intervalo válido
            print("você deve digitar um número entre 1 e 100!")
            # Pula para a próxima iteração do loop, ignorando o resto do código abaixo
            continue
 
        # Verifica se o jogador acertou o número secreto
        acertou = numero_secreto == chute
        # Verifica se o chute foi maior que o número secreto
        maior = chute > numero_secreto
        # Verifica se o chute foi menor que o número secreto
        menor = chute < numero_secreto
 
        # Se o jogador acertou o número secreto
        if acertou:
            # Informa ao jogador que ele acertou
            print("Parabéns! você acertou!")
            # Sai do loop, encerrando o jogo
            break
        else:
            # Se o chute foi maior que o número secreto
            if maior:
                # Informa ao jogador que seu chute foi maior
                print("O seu chute foi maior do que o número secreto!")
               
            # Se o chute foi menor que o número secreto
            else:
                # Informa ao jogador que seu chute foi menor
                print("O seu chute foi menor do que o número secreto")
 
    # Após o término do loop, informa o fim do jogo e revela o número secreto
    print("Fim do jogo! O número secreto era", numero_secreto)
   
    if not jogar_novamente():
        break