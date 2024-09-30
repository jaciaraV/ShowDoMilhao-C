# ShowDoMilhao-C

Este repositório contém a implementação do jogo "Show do Milhão" em C. Este projeto é muito especial para mim, pois representa meu primeiro trabalho em programação. Ao desenvolver este jogo, utilizei funções simples como `switch`, `if-else` e trabalhei com lógica de controle, permitindo que os jogadores testem seus conhecimentos em diferentes áreas.

## Resumo

O "Show do Milhão" é um jogo baseado no popular programa de televisão, onde os jogadores podem responder a perguntas de múltipla escolha em várias categorias. O jogo desafia os participantes a acumular prêmios em dinheiro virtual ao responder corretamente às perguntas.

## Funcionalidades

- **Perguntas e Respostas:** Os jogadores enfrentam uma série de perguntas com múltiplas escolhas, valendo diferentes quantias em dinheiro.
- **Temas Variados:** O jogo oferece perguntas em várias categorias, como Conhecimentos Gerais, História, Biologia, Geografia e Química.
- **Estruturas de Controle:** Utiliza estruturas simples como `switch` e `if-else` para gerenciar a lógica do jogo.
- **Pontuação:** Os usuários acumulam pontos conforme respondem corretamente às perguntas.

## Estrutura do Código

O código é organizado de forma que cada parte do jogo seja gerenciada eficientemente. Abaixo estão os principais componentes do código:

1. **Inclusões de Bibliotecas:**
   - `stdio.h`: Para entrada e saída padrão.
   - `time.h` e `stdlib.h`: Para geração de números aleatórios e manipulação do tempo.

2. **Variáveis Globais:**
   - `tema`, `resp`: Para armazenar a escolha do tema e a resposta do jogador.
   - `premio`: Para acumular o valor do prêmio que o jogador ganha ao longo do jogo.
   - `estado1`, `estado2`, etc.: Para rastrear se o jogador já respondeu as perguntas de um determinado tema.

3. **Introdução e Menu Principal:**
   - O jogo começa com uma mensagem de boas-vindas e um menu que permite ao jogador escolher o tema das perguntas.
   - Um loop `while(1)` é utilizado para manter o menu ativo até que o jogador escolha sair.

4. **Perguntas e Respostas:**
   - Para cada tema, há um conjunto de perguntas com valores de prêmio correspondentes.
   - A lógica de verificação de resposta utiliza `if-else` para determinar se a resposta do jogador está correta e atualizar o prêmio.

5. **Finalização do Jogo:**
   - O jogo termina quando o jogador responde incorretamente ou escolhe sair.

## Como Jogar

Para jogar o "Show do Milhão", siga os passos abaixo:

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/seunome/ShowDoMilhao-C.git
## Licensas
Para fins educativos
