#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circulo.h"

void ponto_comparacao (CIRCULO *c, PONTO *p) {
    float distancia = ponto_distancia(p, circulo_get_ponto(c));
    float raio = circulo_get_raio(c);

    if(distancia > raio)
        printf("fora\n");
    else if(distancia == raio)
        printf("no raio\n");
    else
        printf("dentro\n");
}

int main() {
    float xAux, yAux, raioAux;
    unsigned int n;

    //leitura das coordenadas do ponto e raio do circulo e criacao do ponto e do circulo
    scanf(" %f %f %f", &xAux, &yAux, &raioAux);
    PONTO *p = (PONTO *) ponto_criar();
    ponto_set(p, xAux, yAux);
    CIRCULO *c = (CIRCULO *) circulo_criar(p, raioAux);

    //leitura da quantidade de casos de teste
    scanf(" %u", &n);

    //leitura e teste dos casos
    PONTO *pAux = (PONTO *) ponto_criar();
    for(unsigned int i = 1; i <= n; ++i) {
        scanf(" %f %f", &xAux, &yAux);
        ponto_set(pAux, xAux, yAux);
        ponto_comparacao(c, pAux);
    }

    //limpeza da memoria
    ponto_apagar(&pAux);
    circulo_apagar(&c);

    return 0;
}