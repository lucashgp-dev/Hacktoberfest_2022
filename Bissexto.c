#include <stdio.h>

int bissexto(int num){

    if (num%4==0 && num%100!=0)

        return 1;

    return 0;

}

