#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
    return b;
}

void dynamic_Knapsack(int n, int W, int v[], int w[])
{
  int b[n + 1][W + 1];

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      b[i][j] = 0;
    }
  }

  printf("\n\n");

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      printf("b[%d][%d] = %d\n", i, j, b[i][j]);
    }
  }

  printf("\n\n");

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      if (j < w[i - 1])
      {
        b[i][j] = b[i - 1][j];
      }
      else if (j >= w[i - 1])
      {
        int arg = b[i - 1][j];
        int arg1 = v[i - 1] + b[i - 1][j - w[i - 1]];
        b[i][j] = max(arg, arg1);
      }
    }
  }

  printf("\n\n");

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      printf("b[%d][%d] = %d\n", i, j, b[i][j]);
    }
  }

  printf("\n\n");

  int profit = b[n][W];

  int item[n];

  for (int i = 0; i < n; i++)
  {
    item[i] = 0;
  }

  int x = n, y = W;

  while (x > 0 && y > 0)
  {
    // printf("X = %D", x);
    // printf("y = %D", y);
    if (b[x][y] != b[x - 1][y])
    {
      item[x - 1] = 1;
      x -= 1;
      y = y - w[x - 1];
    }
    else
    {
      x -= 1;
    }
  }

  printf("Profit : %d\n\n", profit);

  printf("Items : \t");

  for (int i = 0; i < n; i++)
  {

    printf("%d ", item[i]);
  }
}

int main()
{
  int n, W;

  printf("ENter the number items :\n");
  scanf("%d", &n);

  printf("ENter the capicity of knapsack :\n");
  scanf("%d", &W);

  int val[n], weight[n];

  for (int i = 0; i < n; i++)
  {
    printf("Enter the value of item %d \n", i + 1);
    scanf("%d", &val[i]);
    printf("Enter the weight of item %d \n", i + 1);
    scanf("%d", &weight[i]);
  }

  dynamic_Knapsack(n, W, val, weight);

  return 0;
}
