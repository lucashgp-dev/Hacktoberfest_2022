#include <stdio.h>

int main(){
int E,D;
scanf("%d %d",&E,&D);

if(D==E || E> D){
    printf("Eu odeio a professora!\n");
}

else if ((D-E) >= 3){
    printf("Muito bem! Apresenta antes do Natal!\n");
}

else if ((D-E) < 3){
    printf("Parece o trabalho do meu filho!\n");
    if ((E+2)<24){
            printf("TCC Apresentado!\n");}
    else {
        printf("Fail! Entao eh nataaaaal!\n");}
}


return 0;
}

