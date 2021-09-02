#include <stdio.h>

 int EhPalindromo(int num){
   int aux_1, aux_2, aux_3, aux_4, aux_5, aux_6;


  if ((num>=10 && num<100) || (num>=1000 && num <10000) || (num>=100000 && num<1000000)){
      if(num%11==0){
        return 1;
      } else {
        return 0;
      }
  }

  if(num<10){
      return 1;
  }

  if(num>=100&&num<1000){
      aux_1 = num%100;
      aux_1 = aux_1%10;
      aux_2 = num/100;
      if (aux_1==aux_2){
        return 1;
      } else {
        return 0;
      }
  }

  if(num>=10000 && num<100000){
      aux_1 = num%100;
      aux_2 = aux_1/10;
      aux_1 = aux_1%10;
      aux_3 = num/1000;
      aux_4 = aux_3/10;
      aux_3 = aux_3%10;
      if((aux_1==aux_4)&&(aux_2==aux_3)){
        return 1;
      } else {
        return 0;
      }
  }

  if(num>=1000000){
      aux_1 = num%100;
      aux_2 = aux_1/10;
      aux_1 = aux_1%10;
      aux_3 = num%1000;
      aux_3 = aux_3/100;
      aux_4 = num/10000;
      aux_6 = aux_4/100;
      aux_4 = aux_4%100;
      aux_5 = aux_4/10;
      aux_4 = aux_4%10;
      if ((aux_1==aux_6)&&(aux_2==aux_5)&&(aux_3==aux_4)){
        return 1;
      } else {
        return 0;
      }
  }

  return -404;
 }

int main(void) {
  int num;
  while(scanf("%d\n", &num)==1){
    if(EhPalindromo(num)==1){
      printf("S\n");
    } else if (EhPalindromo(num)==0){
      printf("N\n");
    }
  }
  return 0;
}
