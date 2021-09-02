#include <stdio.h>

void LeMatriz();

void ImprimeMatriz(int matriz[100][100], int lim_l, int lim_c);

int main(void) {
  int n, i_matrizes=0, l=1, c=1, lim_lA, lim_cA, lim_lB, lim_cB, aux=0, i=0;
  scanf("%d", &n);
  int matrizA[100][100], matrizB[100][100], matrizR[100][100];
  for(i_matrizes=0;i_matrizes<n;i_matrizes++){

    scanf("%d %d", &lim_cA, &lim_lA);
    for(l=1;l<=lim_lA;l++){
      for(c=1;c<=lim_cA;c++){
        scanf("%d", &matrizA[l][c]);
      }
    }

    scanf("%d %d", &lim_cB, &lim_lB);
    for(l=1;l<=lim_lB;l++){
      for(c=1;c<=lim_cB;c++){
        scanf("%d", &matrizB[l][c]);
      }
    }
    if (lim_cA!=lim_lB){
      printf("IMPOSSIVEL\n\n");
    } else {
      //printf("POSSIVEL\n");
      //ImprimeMatriz(matrizA, lim_lA, lim_cA);
      //printf("-------\n");
      //ImprimeMatriz(matrizB, lim_lB, lim_cB);
      //printf("-------\n");
      for(l=1;l<=lim_lA;l++){
        for(c=1;c<=lim_cB;c++){
          matrizR[l][c]=0;
          for(i = 1; i <= lim_lB; i++) {
				    aux +=  matrizA[l][i] * matrizB[i][c];
			    }
          matrizR[l][c]=aux;
          aux=0;
        }//é aqui
      }
      ImprimeMatriz(matrizR,lim_lA, lim_cB);
      printf("\n");
    }
  }
  return 0;
}


void ImprimeMatriz(int matriz[100][100], int lim_l, int lim_c){
  int l=1, c=1;
  for(l=1;l<=lim_l;l++){
      for(c=1;c<=lim_c;c++){
        //scanf("%d", &matriz[c][l]);
        printf("%d", matriz[l][c]);
        if (c!=lim_c){
          printf(" ");
        }
      }
      printf("\n");
    }
}
