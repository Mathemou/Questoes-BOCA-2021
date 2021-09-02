#include <stdio.h>

int main(void) {
  int n, uni=0, dez=0, cem=0, mil=0, dezmil=0;
  scanf("%d", &n);
  while(n>9){

    if(n>=10000){
      dezmil = n/10000;
      n = n%10000;
    }
    if(n>=1000){
      mil = n/1000;
      n = n%1000;
    }
    if(n>=100){
     cem = n/100;
     n = n%100;
    }
    if (n>=10){
      dez = n/10;
      uni = n%10;
    }

    n = dezmil + mil + cem + dez + uni;

    dezmil = 0;
    mil = 0;
    cem = 0;
    uni = 0;

  }
  printf("RESP:%d", n);
  return 0;
}
