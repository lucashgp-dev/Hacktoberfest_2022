#include <stdio.h>
#include <math.h>

int main()
{

    unsigned short totalCasos, quantCaso, tam;
    unsigned short linha, coluna, quantDigitos, k;
    long double maior;

    quantCaso = 4;
    scanf("%hu", &totalCasos);
    while (totalCasos--)
    {

        scanf("%hu", &tam);

        long double matriz[tam][tam];

        for (linha = 0; linha < tam; linha++)
            for (coluna = 0; coluna < tam; coluna++)
            {
                scanf("%Lf", &matriz[linha][coluna]);
                matriz[linha][coluna] *= matriz[linha][coluna];
            }

        printf("Quadrado da matriz #%d:\n", quantCaso);
        for (linha = 0; linha < tam; linha++)
        {
            for (coluna = 0; coluna < tam; coluna++)
            {
                maior = 0;

                for (k = 0; k < tam; k++)
                    if (matriz[k][coluna] > maior)
                        maior = matriz[k][coluna];

                quantDigitos = ((floor(log10(maior))) + 1);

                if (coluna != tam && coluna != 0)
                    printf(" ");
                printf("%*.Lf", quantDigitos, matriz[linha][coluna]);
            }
            printf("\n");
        }
        quantCaso++;
        if (totalCasos != 0)
            printf("\n");
    }
}