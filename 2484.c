#include <stdio.h>
#include <string.h>

int main(){

    char palavra[1000];

    while(scanf(" %[^\n]", palavra) != EOF){

        char espaco[1000] = " ";
        int tamanho,tamanho2,i,j;

        tamanho =strlen(palavra);
        tamanho2=tamanho;

        for(j=0;j<tamanho2;j++){

            if(tamanho2<2 || tamanho2>100)
                break;
            

            for(i = 0; i < tamanho; i++){

                if(i==(tamanho - 1)){
                    printf("%c",palavra[i]);
                    break;
                }
                
                if(tamanho == 1)
                   printf("%c",palavra[i]);

                else
                printf("%c ",palavra[i]);

            }

            tamanho--;
            printf("\n");

            if(tamanho < 1)
                printf("\n");
            else
                printf("%s",espaco);

            espaco[j+1]= espaco[0];

        }
    }
    
    return 0;

}