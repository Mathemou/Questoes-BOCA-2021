#include <stdio.h>
int CalculaValorPalavra(char letra){
  if (letra>=97&&letra<=122){
    return letra - 96;
  }
  if (letra>=65&&letra<=90){
    return letra - 38;
  }
  return 0;
}
int EhPrimo(int n){
  int test;

  if (n==2){
    return 1;
  }
  if(n==1 || n==0){
    return 0;
  }
  for (test=2;test<n;test++){
    if (n%test==0){
      return 0;
    }
  }
  return 1;
}
int ProximoPrimo(int n){
  while(EhPrimo(n)==0){
    n++;
  }
  return n;
}
int main(void) {
  char letra;
  int valor_palavra=0;
  while(scanf("%c", &letra)==1){

      valor_palavra += CalculaValorPalavra(letra);
      if(letra=='\n'){
        if (EhPrimo(valor_palavra)==1){
          printf("E primo\n");
        } else {
          printf("Nao e primo %d\n", ProximoPrimo(valor_palavra));
        }
        valor_palavra=0;
      }
  }

  return 0;
}
