#include <stdio.h>
 
int main() {
 
    char NOME[200];
    double SALARIO,VENDAS;
    scanf("%s",&NOME);
    scanf("%lf",&SALARIO);
    scanf("%lf",&VENDAS);
    
    printf("TOTAL = R$ %.2lf\n",SALARIO + (VENDAS*0.15));

 
    return 0;
}