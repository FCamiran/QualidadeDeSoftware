#ifndef MAIOR_FILA_H
#define MAIOR_FILA_H


void* maiorinfo(pDFila fila, FuncaoComparacao fc) {
    if (filaVazia(fila)) {
        return NULL;
    }

    pNoh nohAtual = fila->pdLista->primeiro;
    if (nohAtual == NULL) {
        return NULL;
    }

    void* maior = nohAtual->info;
    nohAtual = nohAtual->prox;

    while (nohAtual != NULL) {
        if (fc(nohAtual->info, maior) > 0) {
            maior = nohAtual->info;
            printf("\n++%d++",maior);
        }
        nohAtual = nohAtual->prox;
    }
printf("\n===%d===\n",maior);
    return maior;
}

#endif
