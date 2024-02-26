print("#################################################")
print("######### Bem vindo ao Jogo do Adivinha #########")
print("#################################################")

numero_secreto = 45

chute = int(input("Digite um numero: "))

print("Você digitou ", chute)

if(numero_secreto == chute):
    print("Voce acertou!")
else:
    print("Você errou!")

print("O jogo terminou")