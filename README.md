🗺️ Sistema de Cadastro de Territórios – Jogo WAR (C)

Este projeto é um programa simples desenvolvido em linguagem C que simula o cadastro de territórios do jogo WAR, utilizando estruturas (struct), vetores e entrada de dados pelo teclado.

O sistema permite cadastrar informações básicas de territórios e exibi-las ao final da execução.

📌 Funcionalidades

Cadastro de 5 territórios

Para cada território, o usuário informa:

Nome do território

Cor do exército

Quantidade de tropas

Exibição organizada de todos os territórios cadastrados

🧠 Conceitos de Programação Utilizados

Este código foi desenvolvido com foco didático e utiliza:

struct (estrutura de dados)

Vetores de estruturas

Laços de repetição (for)

Entrada e saída padrão (scanf e printf)

Manipulação de strings

Boas práticas de organização e legibilidade

🧩 Estrutura do Código
Estrutura Territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};


Cada território possui:

nome → Nome do território

cor → Cor do exército

tropas → Quantidade de tropas

▶️ Como Executar o Programa
Pré-requisitos

Compilador C (ex: gcc)

Sistema operacional Windows, Linux ou macOS

Passos

Salve o código em um arquivo, por exemplo:

territorios_war.c


Compile o código:

gcc territorios_war.c -o territorios_war


Execute o programa:

./territorios_war

💻 Exemplo de Execução
===== SISTEMA DE CADASTRO DE TERRITORIOS - JOGO WAR =====

Cadastro do territorio 1:
Digite o nome do territorio: Brasil
Digite a cor do exercito: Verde
Digite a quantidade de tropas: 10


Após o cadastro, o sistema exibe a lista completa dos territórios cadastrados.

🎯 Objetivo Educacional

Este projeto tem como objetivo:

Praticar o uso de estruturas em C

Entender como armazenar e manipular múltiplos registros

Trabalhar com entrada de dados contendo espaços

Desenvolver lógica básica de sistemas de cadastro

🚀 Possíveis Melhorias Futuras

Permitir número dinâmico de territórios

Implementar menu interativo

Validação de dados de entrada

Salvamento em arquivo

Simulação de ataques entre territórios

📄 Licença

Este projeto é de uso educacional e pode ser livremente modificado e distribuído para fins de estudo.
