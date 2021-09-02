#include <stdio.h>
int EhIgual(int a, int b){
  if(a==b){
    return 1;
  } else {
    return 0;
  }
}
int MaiorDigito(int n){
  int uni, dez, cem, mil, demil, cemil;
  if (n<10){
    return n;
  } else if (n>9 && n<100){
     uni = n%10;
     dez = n/10;
     if (uni>=dez){
       return uni;
     } else {
       return dez;
     }
   } else if (n>99 && n<1000){
     uni = n%10;
     dez = n%100;
     dez = dez/10;
     cem = n/100;
     if (uni>=dez&&uni>=cem){
       return uni;
     } else if (dez>=cem) {
       return dez;
     } else {
       return cem;
     }
   } else if (n>999 && n<10000){
     uni = n%10;
     dez = n%100;
     dez = dez/10;
     cem = n%1000;
     cem = cem/100;
     mil = n/1000;
     if (uni>=dez&&uni>=cem&&uni>=mil){
       return uni;
     } else if (dez>=cem&&dez>=mil) {
       return dez;
     } else if (cem>=mil){
       return cem;
     } else {
       return mil;
     }
   } else if (n>9999 && n<100000){
     uni = n%10;
     dez = n%100;
     dez = dez/10;
     cem = n%1000;
     cem = cem/100;
     mil = n%10000;
     mil = mil/1000;
     demil = n/10000;
     if (uni>=dez&&uni>=cem&&uni>=mil&&uni>=demil){
       return uni;
     } else if (dez>=cem&&dez>=mil&&dez>=demil) {
       return dez;
     } else if (cem>=mil&&cem>=demil){
       return cem;
     } else if (mil>=demil){
       return mil;
     } else {
       return demil;
     }
   }
  return 404;
}
int main(void) {
  int n1, n2;
  int num1, num2, cont=0;
  while(scanf("(%d", &n1)==1){
    scanf(",%d)", &n2);
    //printf("%d %d\n", MaiorDigito(n1), MaiorDigito(n2));
    if(EhIgual(MaiorDigito(n1), MaiorDigito(n2))){
      cont++;
    }
  }
  printf("COUNT:%d", cont);
  return 0;
}
