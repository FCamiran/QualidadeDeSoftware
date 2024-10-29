#ifndef INVERTER_FILA_H
#define INVERTER_FILA_H
#include "../Pilha.h"

pDFila inverterFila(pDFila pFila) {

    pDPilha pPilha = criarPilha();
    void* info;

    while (filaVazia(pFila)==0){
            info = desenfileirarInfo(pFila);
            empilharInfo(pPilha, info);
    }

    while (pilhaVazia(pPilha)==0){
            info = desempilharInfo(pPilha);
            enfileirarInfo(pFila, info);
    }

    return pFila;
}

#endif
