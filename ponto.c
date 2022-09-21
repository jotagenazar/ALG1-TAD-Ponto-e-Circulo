#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "ponto.h"

struct ponto_ {
    float x;
    float y;
};

PONTO *ponto_criar () {
    PONTO *p = (PONTO *) malloc(sizeof(PONTO));
    if(p != NULL) {
        p->x = 0;
        p->y = 0;
        return p;
    }

    exit(1);
}

void ponto_apagar(PONTO **p) {
    if(p != NULL) {
        free(*p);
        *p = NULL;
    }
}

bool ponto_set(PONTO *p, float x, float y) {
    if(p != NULL) {
        p->x = x;
        p->y = y;
        return true;
    }
    return false;
}

float ponto_get_x(PONTO *p) {
    if(p != NULL)
        return p->x;

    exit(1);
}

float ponto_get_y(PONTO *p) {
    if(p != NULL)
        return p->y;
        
    exit(1);
}

//já que a função calcula a distancia entre dois pontos, que é uma ferramenta de manipulação do TAD ponto independente do círculo,
//o ideal é que a funcao da distancia pertença ao TAD do ponto
float ponto_distancia(PONTO *p1, PONTO *p2) {
    if(p1 != NULL && p2 != NULL) {
        float distancia = sqrt( pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2) );
        return distancia;
    }
    
    exit(1);
}
