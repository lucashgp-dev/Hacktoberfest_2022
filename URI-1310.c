#include <stdio.h>
#define MAX(A, B) ((A > B) ? (A) : (B))

//Prototipação
int analisa(int *lucros, int quantidadeDeDias, int custoPorDia);

int main()
{
    int dias, custoDia;

    while (scanf("%d %d\n", &dias, &custoDia) != EOF)
    {
        int lucros[50];
        int i;
        for (i = 0; i < dias; i++)
        {
            scanf("%d\n", lucros + i);
        }

        printf("%d\n", analisa(lucros, dias, custoDia));
    }

    return 0;
}

int analisa(int *lucros, int quantidadeDeDias, int custoPorDia)
{
    int maximo = 0;
    int maximoAteAqui = 0;
    int dia;

    for (dia = 0; dia < quantidadeDeDias; dia++)
    {
        int lucro = lucros[dia] - custoPorDia;

        maximoAteAqui = MAX(0, maximoAteAqui + lucro);
        maximo = MAX(maximo, maximoAteAqui);
    }

    return maximo;
}
