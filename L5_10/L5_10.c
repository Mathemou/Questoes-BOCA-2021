#include <stdio.h>

void ImprimeDadosDoVetor(int vet[], int qtd){
  int i=0;
  printf("{");
  for(i=0;i<qtd;i++){
      if (i!=qtd-1){
        printf("%d, ", vet[i]);
      } else {
        printf("%d", vet[qtd-1]);
      }
  }
  printf("}");
}

void OrdenaCrescente(int vet[], int qtd){
  int i=0, j=0, aux;
  for(i=0;i<qtd;i++){
    for(j=0;j<qtd;j++){
      if (vet[i]<vet[j]){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  ImprimeDadosDoVetor(vet, qtd);
}

int main(void) {
  int n,i=0;
  scanf("%d ", &n);

  int vet[n];
  for (i=0;i<n;i++){
    scanf("%d ", &vet[i]);
  }
  OrdenaCrescente(vet, n);
  return 0;
}
