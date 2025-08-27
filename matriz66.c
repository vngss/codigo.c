#include <stdio.h>

int main() {
   int mat[3][3];
  int i, j, maior;
  printf ("digite os elementos da matriz 3x3 \n");
   for (i = 0; i < 3; i++); {
    for (j = 0; j < 3; j++){
      scanf("%d", &mat[i][j]);
    }
  {
    maior = mat[0][0];
for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++);{
      if(mat[1][j] > maior) {
        maior = mat[i][j];
      }
    }  
    }
  printf("\n maior valor: %d\n", maior);

    return 0;
}
   }
}
