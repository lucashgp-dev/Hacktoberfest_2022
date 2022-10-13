include <stdio.h>

area_comp(float raio,float *comp,float *area){

    float pi=3.14;

    *area = pi*(raio * raio);

    *comp =2 * pi * raio;

}

