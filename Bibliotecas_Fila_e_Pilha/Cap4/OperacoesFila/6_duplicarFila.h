#ifndef DUPLICAR_FILA_H
#define DUPLICAR_FILA_H

pDFila duplicarFila(pDFila fila, FuncaoAlocacao fa)
{
    pDFila NovaFila = criarFila();

    pDFila Aux = criarFila();

    while (!filaVazia(fila)){
        void* info = desenfileirarInfo(fila);
        void* infoAux = fa(info);
        enfileirarInfo(NovaFila, infoAux);
        enfileirarInfo(Aux, info);

    }

    while(!filaVazia(Aux)){
        enfileirarInfo(fila, desenfileirarInfo(Aux));

    }
 destruirLista(Aux->pdLista);
    return NovaFila;
}


#endif
