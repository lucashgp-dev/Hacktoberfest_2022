#include <stdio.h>
 
int main() {
int num,hours;
float price,salary;
scanf("%d %d %f",&num, &hours, &price);
salary= price *hours;
printf("NUMBER = %d\n",num);
printf("SALARY = U$ %.2f\n",salary);

    return 0;
}
