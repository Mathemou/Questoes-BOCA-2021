#include <stdio.h>

int main(void) {
  int c, n, i, cont_par=0, cont_impar=0, ver=0, ver_tip;
  scanf("%d", &c);

    for (i=0;i<c;i++){
      scanf("%d", &n);
      if (ver==0){
        if (n%2==0){
          ver_tip=1;
        } else {
          ver_tip=2;
        }
        ver++;
      }
      if (n%2==0){
        cont_par++;
      } else {
        cont_impar++;
      }
    }
    if (ver_tip==1){
      printf("QTD PARES:%d", cont_par);
    } else if (ver_tip==2){
      printf("QTD IMPARES:%d", cont_impar);
    }

  return 0;
}
