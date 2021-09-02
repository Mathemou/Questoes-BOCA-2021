#include <stdio.h>

int EhPar(int n){
  if (n%2==0){
    return 1;
  } else {
    return 0;
  }
}

int valida(int n, int p){
  if (EhPar(n)&&EhPar(p)){
    return 1;
  } else if (!EhPar(n)&&!EhPar(p)){
    return 1;
  } else {
    return 0;
  }
}

void ImprimeDadosDoVetor(int vet[], int qtd){
  int i=0;
  printf("{");
  for (i=0;i<qtd;i++){
    printf("%d", vet[i]);
    if (i!=qtd-1){
      printf(", ");
    }
  }
  printf("}");
}

void TrocaParEImpar(int vet[], int qtd){
  int i=0, aux;
  if (qtd>1){
    for (i=0;i<qtd-1;i++){
      if (!valida(vet[i], i)||!valida(vet[i+1], i+1)){
        aux = vet[i];
        vet[i]=vet[i+1];
        vet[i+1]=aux;
        i++;
      }
    }
  }
  ImprimeDadosDoVetor(vet, qtd);
}


int main(void) {
  int n, i=0;
  scanf("%d\n", &n);
  int num[n];
  for(i=0;i<n;i++){
    scanf("%d", &num[i]);
  }
  TrocaParEImpar(num, n);
  return 0;
}
