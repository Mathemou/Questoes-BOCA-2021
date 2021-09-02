#include <stdio.h>

void ImprimeDadosDoVetor(int vet[], int qtd){
  int i=0;
  printf("{");
  for (i=0;i<qtd;i++){
    if (i!=qtd-1){
      printf("%d, ", vet[i]);
    } else {
      printf("%d", vet[qtd-1]);
    }
  }
  printf("}");
}

void InverteVetor(int * vet, int qtd){
  int i=0, aux;

    for (i=0;i<qtd/2;i++){
      aux=vet[i];
      vet[i]=vet[(qtd-1)-i];
      vet[(qtd-1)-i]=aux;
    }

  ImprimeDadosDoVetor(vet, qtd);
}


int main(void) {
  int n, i=0;
  scanf("%d ", &n);
  int vet[n];
  for(i=0;i<n;i++){
    scanf("%d ", &vet[i]);
  }
  InverteVetor(vet, n);
  return 0;
}
