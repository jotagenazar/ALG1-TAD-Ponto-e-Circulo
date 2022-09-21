#ifndef PONTO_H
    #define PONTO_H
    #include <stdbool.h>
    
    typedef struct ponto_ PONTO;

    PONTO *ponto_criar ();
    void ponto_apagar (PONTO **p);
    bool ponto_set (PONTO *p, float x, float y);
    float ponto_get_x (PONTO *p);
    float ponto_get_y (PONTO *p);
    //já que a função calcula a distancia entre dois pontos, que é uma ferramenta de manipulação do TAD ponto independente do círculo,
    //o ideal é que a funcao da distancia pertença ao TAD do ponto
    float ponto_distancia(PONTO *p1, PONTO *p2);
    
#endif