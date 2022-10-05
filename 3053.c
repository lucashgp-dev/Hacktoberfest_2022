#include <stdio.h>
#include <string.h>
int main(){
int i,N,S,troca=0,A,B,C;
char L[10];
A=0,B=0,C=0;

scanf("%d",&N);
scanf("%s",&L[0]);

if (strcmp(L,"A") == 0) A =1;
if (strcmp(L,"B") == 0) B =1;
if (strcmp(L,"C") == 0) C =1;

for(i=0; i<N;i++){
        scanf("%d",&S);

        if(S == 1){
            troca =A;
            A=B;
            B=troca;}

        if(S == 2){
            troca =B;
            B=C;
            C=troca;}

        if(S == 3){
            troca =C;
            C=A;
            A=troca;}
}

if (A==1)printf("A\n");
if (B==1)printf("B\n");
if (C==1)printf("C\n");


return 0;
}

