#include <stdio.h>

 int somadosdigitos(int n){
   int aux1, aux2, aux3, aux4, aux5, aux6;
   if (n>9 && n<100){
     aux1 = n%10;
     n = n/10;
     n += aux1;
   } else if (n>99 && n<1000){
     aux1 = n%10;
     aux2 = n%100;
     aux2 = aux2/10;
     n = n/100;
     n += aux1 + aux2;
   } else if (n>999 && n<10000){
     aux1 = n%10;
     aux2 = n%100;
     aux2 = aux2/10;
     aux3 = n%1000;
     aux3 = aux3/100;
     n = n/1000;
     n += aux1 + aux2 + aux3;
   } else if (n>9999 && n<100000){
     aux1 = n%10;
     aux2 = n%100;
     aux2 = aux2/10;
     aux3 = n%1000;
     aux3 = aux3/100;
     aux4 = n%10000;
     aux4 = aux4/1000;
     n = n/10000;
     n += aux1 + aux2 + aux3 +aux4;
   }
   return n;
 }

 void parImpar(int n){
   if(n%2==0){
     printf("Par ");
   } else {
     printf("Impar ");
   }
 }

 void valorPrimo(int n){
  int num_test=2;

  if (n==0){
    printf("Nao e primo\n");
    return;
  }

  if (n==2){
    printf("Primo\n");
    return;
  }
  if (n==1){
    printf("Nao e primo\n");
    return;
  }

  for (num_test=2; num_test<n;num_test++){
    if(n%num_test==0){
      printf("Nao e primo\n");
      return;
    }
  }

  printf("Primo\n");
  return;
 }

int main(void) {
  int n;
  scanf("%d", &n);
  do{
    n = somadosdigitos(n);
    printf("%d ", n);
    parImpar(n);
    valorPrimo(n);
  }while (n>9);

  return 0;
}
