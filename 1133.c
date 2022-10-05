#include <stdio.h>
int main( ){

int  X,Y,i,maior,menor;

scanf("%d %d",&X,&Y);

maior=X;
menor =Y;

if(Y>maior){
        maior=Y;
        menor=X;}

for(i=menor+1;i<maior;i++){

    if(i%5==2 || i%5==3){
        printf("%d\n",i);}
}

return 0;
}
