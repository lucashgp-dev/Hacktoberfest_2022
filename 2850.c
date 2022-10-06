#include <stdio.h>
#include <string.h>

int main( ){
char teste[60];

 while( scanf( "%s", teste) == 1 ){

 if(strcmp (teste, "esquerda") == 0){
    printf("ingles\n");
 }

 if(strcmp (teste, "direita") == 0){
    printf("frances\n");
 }
  if(strcmp (teste, "nenhuma") == 0){
    printf("portugues\n");
 }
  if(strcmp (teste, "as\0duas") == 0){
    printf("caiu\n");
 }
 }

return 0;
}
