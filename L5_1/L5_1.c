#include <stdio.h>
#include <math.h>


int main(void) {
  int n, i=0, maior_nota=0, menor_nota=101, qnt_rep=0, qnt_aci_med=0;
  float soma=0, media, desv;
  scanf("%d ", &n);
  float nota[n];
  for (i=0;i<n;i++){
    scanf("%f ", &nota[i]);
    if (nota[i]>maior_nota){
      maior_nota = nota[i];
    }
    if (nota[i]<menor_nota){
      menor_nota = nota[i];
    }
    if (nota[i]<70){
      qnt_rep++;
    }
    soma+=nota[i];
  }
  media = soma/n;
  for (i=0;i<n;i++){
    if (nota[i]>media){
      qnt_aci_med++;
    }
    desv += pow((nota[i]-media), 2);
  }
  desv = desv/n;
  desv = sqrt(desv);
  printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", menor_nota, maior_nota, media, desv, qnt_aci_med, qnt_rep);
  return 0;
}
