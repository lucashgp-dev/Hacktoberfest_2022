#include <stdio.h>

int main(){

  int T,PA,PB,i,anos=0;
  double G1, G2;

  scanf("%d",&T);


  for(i = 0; i<T; i++){
    scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);

    while(1){

    PA += (int) PA * (G1/100);
    PB += (int) PB * (G2/100);
    anos+=1;
    
    if (PA>PB || anos>100){
            break;}}

            if (anos<=100){
                printf("%d anos.\n",anos);
            }
        else{
            printf("Mais de 1 seculo.\n");
        }
    anos=0;
    }

return 0;

}
