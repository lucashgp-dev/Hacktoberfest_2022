#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (){

    int N,i,j,letras=0;
    char frase[1010];

    scanf("%d",&N); 
    
    while(N--){
        char alfabeto[30] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0' };

        scanf(" %[^\n]", frase);

        for(i=0;i<(strlen(frase));i++){

                for(j=0;j<(strlen(alfabeto));j++){

                    if(frase[i]==alfabeto[j]){
                        letras++;
                        alfabeto[j]='0';}
                }
            }

            if(letras == 26){
                printf("frase completa\n");}

            else if (letras>12 && letras<26){
                printf("frase quase completa\n");}

            else{
                printf("frase mal elaborada\n");}

            letras=0;
        }   

    return 0;
}
