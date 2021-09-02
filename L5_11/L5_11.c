#include <stdio.h>

void LeNumeros(int tamanho_do_vetor ,int Numeros[] ){
    int i = 0;
    for (i=0;i < tamanho_do_vetor; i++){
        scanf("%d", &Numeros[i]);
    }
    return;
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
}

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

int main(void) {
  int a, i=0, j=0,k=0, ver=0, valA=0, valB=0;
  scanf("%d", &a);
  int vetA[a];
  LeNumeros(a, vetA);
  int b;
  scanf("%d", &b);
  int vetB[b];
  LeNumeros(b, vetB);
  OrdenaCrescente(vetA, a);
  OrdenaCrescente(vetB, b);
  //ImprimeDadosDoVetor(vetA, a);
  //ImprimeDadosDoVetor(vetB, b);
  int vetAB[a+b];
  for (i=0;i<a+b;i++){
    if (i<a){
    vetAB[i]=vetA[i];
    }
    if (i<b){
    vetAB[i+a]=vetB[i];
    }
  }
  OrdenaCrescente(vetAB, a+b);
  //ImprimeDadosDoVetor(vetAB, a+b);
  for (i=0;i<a+b;i++){
    ver=0;
    for (j=valA;j<a;j++){
      if (vetAB[i]==vetA[j]){
        printf("A");
        valA=j+1;
        ver=1;
        break;
      }
    }
    if(ver==0){
      for(k=valB;k<b;k++){
        if (vetAB[i]==vetB[k]){
          printf("B");
          valB=k+1;
          break;
        }
      }
    }
  }

  return 0;
}
