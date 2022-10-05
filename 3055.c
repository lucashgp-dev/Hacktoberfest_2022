#include <stdio.h>

int main (){

int num1,media,num2;
num2=0;

scanf("%d",&num1);
scanf("%d",&media);

while(((num1+num2)/2) != media){
    num2++;
}
printf("%d\n",num2);

return 0;
}

