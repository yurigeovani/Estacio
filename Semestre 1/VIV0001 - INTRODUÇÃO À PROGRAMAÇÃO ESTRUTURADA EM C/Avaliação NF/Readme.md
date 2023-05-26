# **Avaliação NF**
Essa é a atividade que valerá a nota da "Avaliação NF". Existem 4 temas e vocês devem escolher UM deles e desenvolver o projeto do tema escolhido.
Alguns pontos importantes são:
* O projeto deve ser feito de forma individual
* Vocês devem enviar o projeto pelo SAVA. Vocês devem anexar o código fonte no envio da resposta de uma das seguintes formas: arquivo(s) com extensão .txt, arquivo(s) com extensão .c, arquivo compactado (.rar, .zip, etc...) ou link de algum repositório de código (github, bitbucket, etc...)
* O prazo final para envio é 12/06.
* Todos os projetos para escolha vocês conseguem desenvolver com os temas 2 a 6 aprendidos na disciplina.

<br>

## **Tema 1 - Sistema de Gerenciamento de Alunos**
### **_Descrição_**:
O objetivo do projeto é desenvolver um sistema simples de gerenciamento de alunos usando os conceitos aprendidos até o momento. O sistema deve permitir que o usuário realize as seguintes operações:
* Cadastro de alunos: O usuário deve ser capaz de cadastrar os alunos no sistema, fornecendo informações como matrícula, nome, idade, gênero e média das notas.
* Listagem de alunos: O usuário deve poder visualizar uma lista de todos os alunos cadastrados, exibindo suas informações básicas.
* Cálculo de média: O sistema deve calcular e exibir a média geral de todos os alunos cadastrados.
* Pesquisa de alunos: O usuário deve poder pesquisar por alunos específicos com base na matrícula.
* Atualização de dados: O usuário deve poder atualizar as informações de um aluno cadastrado.
* Remoção de alunos: O usuário deve poder remover um aluno cadastrado do sistema.

### **_Requisitos técnicos_**:
* O sistema deve ser implementado em C.
* Use variáveis para armazenar as informações dos alunos.
* Utilize estruturas de controle (if, else, switch, while, for) para implementar as funcionalidades do sistema.
* Faça uso de vetores e matrizes, se necessário, para armazenar e manipular os dados dos alunos.
* Utilize operadores aritméticos, relacionais e lógicos para realizar cálculos e comparações.

<br>

## **Tema 2 - Jogo de Adivinhação**
### **_Descrição_**:
Neste projeto, o objetivo é desenvolver um jogo de adivinhação. O jogo deve funcionar da seguinte forma:
* O programa gera um número aleatório entre 1 e 100.
* O jogador tem um número limitado de tentativas para adivinhar o número gerado.
* A cada tentativa, o programa deve informar se o número digitado pelo jogador é maior, menor ou igual ao número gerado.
* O jogo continua até que o jogador adivinhe corretamente o número ou exceda o número de tentativas.

### **_Requisitos técnicos_**:
* Use variáveis para armazenar o número gerado, o número de tentativas e a entrada do jogador.
* Utilize estruturas de controle (if, else, while) para implementar as regras do jogo.
* Faça uso de operadores relacionais para comparar os números.
* Exiba mensagens informativas para orientar o jogador durante o jogo.

<br>

## **Tema 3 - Jogo da Forca**
### **_Descrição_**:
Neste projeto, o objetivo é desenvolver um jogo da forca, onde um jogador tenta adivinhar uma palavra desconhecida, fornecendo letras como palpites. O jogo deve funcionar da seguinte forma:
* O programa seleciona uma palavra aleatória de um conjunto pré-definido de
palavras.
* O jogador tem um número limitado de tentativas para adivinhar a palavra.
* A cada tentativa, o jogador deve fornecer uma letra como palpite.
* O programa verifica se a letra está presente na palavra. Se estiver, exibe as posições onde a letra ocorre. Se não estiver, o programa informa ao jogador e contabiliza a tentativa errada.
* O jogo continua até que o jogador adivinhe corretamente a palavra ou exceda o número de tentativas.

### **_Requisitos técnicos_**:
* Utilize vetores e matrizes para armazenar a palavra selecionada, os palpites do jogador e as informações sobre as letras corretas e erradas.
* Utilize estruturas de controle (if, else, for, while) para implementar as regras do jogo.
* Faça uso de operadores relacionais e lógicos para verificar a presença de letras na palavra.
* Exiba mensagens informativas para orientar o jogador durante o jogo, como a palavra parcialmente revelada e as letras incorretas já palpadas.

<br>

## **Tema 4 - Calculadora com Operações Básicas**
### **_Descrição_**:
Neste projeto, o objetivo é implementar uma calculadora simples que seja capaz de realizar as operações básicas de soma, subtração, multiplicação e divisão. A calculadora deve funcionar da seguinte forma:
* O programa exibe um menu com as opções de operação para o usuário.
* O usuário seleciona uma operação digitando o número correspondente.
* O programa solicita os valores necessários para a operação (por exemplo, dois números para soma ou subtração, um dividendo e um divisor para a divisão).
* O programa realiza a operação e exibe o resultado.

### **_Requisitos técnicos_**:
* Utilize variáveis para armazenar os valores digitados pelo usuário e o resultado das operações.
* Utilize estruturas de controle (if, else, switch) para implementar o menu de opções e realizar a operação selecionada.
* Faça uso de operadores aritméticos para realizar as operações matemáticas.
* Exiba mensagens informativas para orientar o usuário durante o uso da calculadora.
* Lide com situações de erro, como divisão por zero.