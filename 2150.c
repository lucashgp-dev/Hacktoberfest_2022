#include <stdio.h>
#include <string.h>

int main (){

    int i,j,cont;
    char vogais[100],palavra[100];

    cont =0;

    while (scanf(" %[^\n]", vogais) != EOF)
    {
        scanf(" %[^\n]", palavra);

        for(i=0;i<strlen(vogais);i++){

            for(j=0;j<strlen(palavra);j++){

            if(vogais[i]==palavra[j]){
                cont+=1;
            }
            }
        }

        printf("%d\n",cont); 
        cont=0;           }

    return 0;

}