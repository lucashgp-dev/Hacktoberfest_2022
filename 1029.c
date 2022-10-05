#include <stdio.h>

//Variável Global
int num_calls;

//Prototipação
int fib(int num);

int main()
{
    int N, X;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &X);
        num_calls = 0;
        printf("fib(%d) = %d calls = %d\n", X, num_calls - 1, fib(X));
    }
    return 0;
}

int fib(int num)
{
    num_calls++;

    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    else
        return fib(num - 1) + fib(num - 2);
}
