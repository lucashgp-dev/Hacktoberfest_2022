#include <stdio.h>
#include <math.h>

int mdc(int num1, int num2)
{

    int resto;

    do
    {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main()
{
    int x, y, z;

    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {

        if (pow(x, 2) == pow(y, 2) + pow(z, 2) || pow(y, 2) == pow(x, 2) + pow(z, 2) || pow(z, 2) == pow(x, 2) + pow(y, 2))
        {

            if (mdc(mdc(x, y), z) == 1)
            {
                printf("tripla pitagorica primitiva\n");
            }
            else
            {
                printf("tripla pitagorica\n");
            }
        }

        else
        {
            printf("tripla\n");
        }
    }

    return 0;
}