#include <stdio.h>

int main(){
int n=1, maior_n=0, i=0;
float media, soma;

while(n!=0){
  i++;
  scanf("%d", &n);
  if(n>maior_n){
    maior_n = n;
  }
  soma = (float) soma + n;
  media = (float) soma / i;
  //media = (float) media / i;
  if (n!=0){
  printf("%d %.6f\n", maior_n, media);
  }
}


return 0;
}
