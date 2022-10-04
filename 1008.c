#include <stdio.h>
 
int main() {
 
    int NUMF,NUMH;
    float VALOR;
    scanf("%d",&NUMF);
    scanf("%d",&NUMH);
    scanf("%f",&VALOR);
    
    printf("NUMBER = %d\n",NUMF);
    printf("SALARY = U$ %.2f\n",NUMH*VALOR);
 
    return 0;
}