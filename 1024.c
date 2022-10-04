#include <stdio.h>
#include <string.h>


int main (){

    int i,j,N,cont,tam;
    char palavra[1100];
    char aux;
    scanf("%d",&N);

while(N--){

    scanf(" %[^\n]", palavra);

    tam = strlen(palavra);

    for(i=0;i<tam;i++){
        if(isalpha(palavra[i])){
        palavra[i] = palavra[i]+3;
        }
    }


     for (i=0,j=tam-1; i<(tam/2);i++,j--)
    {
      aux = palavra[j];
      palavra[j] = palavra[i];
      palavra[i] = aux;

    }

     for (i=(tam/2);i<tam;i++)
      if ((palavra[i] >= 32 && palavra[i] <= 176 ))
        palavra[i] = palavra[i] - 1;
   
    printf("%s\n",palavra);

}
    return 0;
}
