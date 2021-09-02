#include <stdio.h>

int main(){

int n_num, maior_n, menor_n, qnt_par=0, qnt_impar=0, i;
float media=0;

scanf("%d", &n_num);

int n[n_num];

for(i=0; i<n_num; i++){
  scanf("%d", &n[i]);
}

maior_n = n[0];
menor_n = n[0];

//achar o maior e menor
for(i=0; i<n_num; i++){
  if (n[i]>=maior_n){
    maior_n = n[i];
  }
  if (n[i]<=menor_n){
    menor_n = n[i];
  }
}

//contar pares e impares
for(i=0; i<n_num; i++){
  if (n[i]%2==0){
    qnt_par++;
  } else {
    qnt_impar++;
  }
}

//acha média
for(i=0; i<n_num; i++){
  media += n[i];
}
media = (float) media/n_num;

printf("%d %d %d %d %.6f", maior_n, menor_n, qnt_par, qnt_impar, media);

return 0;
}

