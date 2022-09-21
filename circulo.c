#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circulo.h"

struct circulo_ {
    PONTO *centro;
    float raio;
};

CIRCULO *circulo_criar(PONTO *p, float raio) {
    CIRCULO *c = (CIRCULO *) malloc(sizeof(CIRCULO));
    
    if(p != NULL) {
        c->centro = p;
        c->raio = raio;
        return c;
    }

    exit(1);
}

bool circulo_set_ponto(CIRCULO *c, PONTO *p) {
    if(p != NULL && c != NULL) {
        c->centro = p;
        return true;
    }

    return false;
}

bool circulo_set_raio (CIRCULO *c, float raio) {
    if(c != NULL) {
        c->raio = raio;
        return true;
    }

    return false;
}

PONTO *circulo_get_ponto (CIRCULO *c) {
    if(c != NULL) {
        return c->centro;
    }

    exit(1);
}

float circulo_get_raio (CIRCULO *c) {
    if(c != NULL) {
        return c->raio;
    }

    exit(1);
}

void circulo_apagar (CIRCULO **circulo) {
    if(circulo != NULL) {
        ponto_apagar(&(*circulo)->centro);
        free(*circulo);
        *circulo = NULL;
    }
}