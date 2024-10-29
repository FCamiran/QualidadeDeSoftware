#include <stdio.h>
#include "Utils.h"
#include "Fila.h"



int main(){
    pDFila pFilaInt = criarFila();

    /* teste de enfileiramento */
    enfileirarInfo(pFilaInt, alocaInt(5));
    enfileirarInfo(pFilaInt, alocaInt(3));
    enfileirarInfo(pFilaInt, alocaInt(9));
    enfileirarInfo(pFilaInt, alocaInt(1));
    enfileirarInfo(pFilaInt, alocaInt(2));

   pDFila pFilaInt2 = duplicarFila(pFilaInt, alocaInfoInt);

    //inverterFila(pFilaInt);

    /* teste de desenfileiramento
    void *info = desenfileirarInfo(pFilaInt2);
    printf("\nRetirou o inteiro = %d \n", *((int*)info));*/

    void *info;

    info = maiorinfo(pFilaInt2, comparaInt);
    printf("maior informcao contida na fila: %d ",info);


}
