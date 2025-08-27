#include <stdio.h>

int main() {
   int mat[3][3];
  int i, j;
  printf ("digite os elementos da matriz 3x3 \n");
   for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++){
      scanf("%d", &mat[i][j]);
      
    }
   }
        printf("\ndiagonal principal\n");
  for(i = 0; i < 3; i++){
    printf("%d", mat [i][i]);
  }
  return 0;
    }
