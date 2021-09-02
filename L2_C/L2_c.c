#include <stdio.h>

int main(void) {
  int n, m, i=1, j=1, menor=100, maior=0, valor, dif, ver=0, aux_dif=0, linha;
  scanf("%d %d", &n, &m);
  for (;i<=n;i++){
    for(;j<=m;j++){
      scanf("%d", &valor);
      if(valor>maior){
        maior = valor;
      }
      if(valor<menor){
        menor = valor;
      }
      dif = maior - menor;

    }
    j = 1;
    if (dif>=aux_dif){
      aux_dif = dif;
      linha = i;
      ver++;
    }
    maior = 0;
    menor = 100;
  }
  if(ver==0){
    linha = n;
  }
  printf("Linha %d tem a maior distancia %d\n", linha, aux_dif);
return 0;
}
