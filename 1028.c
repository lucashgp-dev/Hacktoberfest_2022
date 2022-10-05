#include <stdio.h>

int main()
{

    int N, F1, F2, resto, resultado;

    scanf("%d", &N);

    while (N--)
    {

        scanf("%d %d", &F1, &F2);

        if (F1 > F2)
        {
            resto = 1;

            while (resto != 0)
            {
                resto = F1 % F2;
                F1 = F2;
                F2 = resto;
            }
            resultado = F1;
        }
        else
        {
            resto = 1;

            while (resto != 0)
            {
                resto = F2 % F1;
                F2 = F1;
                F1 = resto;
            }
            resultado = F2;
        }

        printf("%d\n", resultado);
    }

    return 0;
}