#include <stdio.h>

//NC testes
//n pessoas
//k salto

//prototipação
int sobrevive(pessoas, salto);

int main()
{
    int testes, i, j, pessoas, salto, sobrevivente;

    scanf("%d", &testes);

    for (i = 1; i <= testes; i++)
    {
        scanf("%d %d", &pessoas, &salto);

        sobrevivente = sobrevive(pessoas, salto);

        printf("Case %d: %d\n", i, sobrevivente);
    }

    return 0;
}

int sobrevive(int pessoas, int salto)
{
    if (pessoas == 1)
        return 1;

    else
    {
        return ((sobrevive(pessoas - 1, salto) + salto - 1) % pessoas + 1);
    }
}