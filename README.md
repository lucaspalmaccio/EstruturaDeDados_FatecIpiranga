# Estruturas de Dados em C 💻

Este repositório contém a resolução das atividades práticas da disciplina de Estruturas de Dados, desenvolvidas inteiramente na linguagem de programação C. O objetivo é consolidar conceitos fundamentais de gerenciamento de memória, recursividade e abstração de dados.

## 🗂️ Estrutura do Repositório

O projeto está dividido em módulos (ED01, ED02, ED03), cada um focado em um tópico específico da linguagem C e de Estruturas de Dados.

---

### 📂 ED01 - Recursividade
Focado no entendimento de chamadas de funções recursivas e na definição de casos base e passos recursivos.

* **Questão 1:** Implementação de uma função recursiva para calcular o valor de uma base `x` elevada a um expoente `y`.
* **Questão 2:** Implementação de uma função recursiva para calcular a sequência de Fibonacci, onde cada número é a soma dos dois anteriores.

---

### 📂 ED02 - Ponteiros e Manipulação de Memória
Focado no entendimento profundo de como a memória RAM é acessada e modificada através de ponteiros.

* **Questão 1:** Teste de mesa e análise de escopo determinando o valor final de uma variável `y` após múltiplas operações indiretas via ponteiros.
* **Questão 2:** Explicação teórica e prática sobre a diferença entre pré-incremento, pós-incremento e aritmética de ponteiros (`p++`, `(*p)++`, `*(++p)` e `*(p+10)`).
* **Questão 3:** Análise de código para prever os valores finais de múltiplas variáveis (`x`, `y` e um ponteiro `p`) após operações matemáticas cruzadas.
* **Questão 4:** *Debugging*. Identificação e correção de erros comuns de sintaxe e lógica em três trechos de código envolvendo atribuição de memória, inicialização de ponteiros nulos (*Segmentation Fault*) e comparação de *strings* (`strcmp`).
* **Questão 5:** Implementação da função clássica de troca (`swap`), utilizando ponteiros para alterar os valores originais de duas variáveis do tipo `float` passadas por referência.

---

### 📂 ED03 - Tipos Abstratos de Dados (TAD) e Alocação Dinâmica
Focado na introdução à modularização do código, proteção de dados (encapsulamento) e uso de memória Heap (`malloc` e `free`).

* **Questão 1:** Definição teórica sobre o que é um Tipo Abstrato de Dados (TAD) e sua principal característica (encapsulamento e ocultação de dados).
* **Questão 2:** Explicação sobre as vantagens da programação modular utilizando TADs (segurança, reaproveitamento de código e facilidade de manutenção).
* **Questão 3:** Implementação prática de um TAD `ContaBancaria`. Criação de uma `struct` e das funções de interface para o utilizador: `inicializar`, `depositar`, `sacar` e `imprimirSaldo`.
* **Questão 4:** Implementação de uma função construtora para o TAD `ContaBancaria` utilizando **alocação dinâmica de memória** (`malloc`), permitindo que a conta seja criada em tempo de execução.

---

## 🚀 Como executar os códigos

1. Certifique-se de ter um compilador C instalado na sua máquina (como o `gcc`).
2. Navegue até a pasta do módulo desejado.
3. Compile o ficheiro específico da questão. Exemplo:
   ```bash
   gcc "1 - ValorY.c" -o programa
