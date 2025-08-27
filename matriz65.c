#include <stdio.h>

int main() {
   int mat[2][3], soma = 0;
  int i, j;
  printf ("digite os elementos da matriz 2x3 \n");
   for (i = 0; i < 2; i++);{
    for (j = 0; j < 3; j++){
      scanf("%d", &mat[i][j]);
      soma += mat[i][j];
    }
   }
        printf("\nSoma dos elementos: %d\n", soma);
  return 0;
    }
