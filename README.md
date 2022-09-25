# ALG1-TAD-Ponto-e-Circulo
Implementação e documentação correspondentes aos Exercícios 1 e 2 da disciplina de Algoritmos e Estruturas de Dados I, cursada em 2022 no ICMC da USP São Carlos 

# Exercício 2

O exercício consiste em utilizar o programa cliente fornecido (o arquivo main.c) e os TADs Ponto e Círculo desenvolidos no exercício 1 para determinar se, dado um ponto, ele está dentro, fora ou no raio de uma circunferência. Deve ser desenvolvida uma função float distancia(PONTO *pa, PONTO *pb); que dado dois pontos retorna a distância entre eles. Essa distância é usada na main para decidir se onde o ponto está (veja no arquivo main.c foneceido). Deve-se decidir em qual TAD a função distância() faz mais sentido ser implementada - acrescente uma justificativa para a escolha/decisão na documentação interna da função.
Entrada

A entrada consiste em,

na primeira linha: x y raio da circunferência

segunda linha: n quantidade de casos testes

n linhas seguintes: x y do ponto

sendo:

x, y = números de ponto flutuante

raio = número de ponto flutuante não negativo

n = um valor inteiro não negativo

dica: caso apareça algum erro parecido com "undefined reference to `pow'" acrescente no makefile na tag all: -lm
Saída

Deverá ser impresso fora se o ponto estiver fora da circunferência, dentro se estiver dentro, ou no raio se o ponto estiver exatamente no raio.
