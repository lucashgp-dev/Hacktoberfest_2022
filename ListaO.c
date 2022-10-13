#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


typedef struct capsulaO CAPSO;
typedef struct listaO LISTAO;


LISTAO* CriarO(){
    LISTAO* li=(LISTAO*)malloc(sizeof(LISTAO));
    if(li!=NULL){
        li->inicio=NULL;
    }
    return li;
}
