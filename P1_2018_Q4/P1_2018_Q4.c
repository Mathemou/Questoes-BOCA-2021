#include <stdio.h>

void somaMinutos(int h, int m, int a){
  int cont_dia=0;
  m+=a;
  if (m>=60){
    h+=m/60;
    m=m%60;
  }
  while (h>=24){
    cont_dia++;
    h-=24;
  }
  if (cont_dia==1){
    printf("(%d dia)", cont_dia);
  }else if (cont_dia>1){
    printf("(%d dias)", cont_dia);
  }
  if (h==1){
    printf("(%d hora)", h);
  } else if (h>1){
    printf("(%d horas)", h);
  }
  if (m==1){
    printf("(%d minuto)\n", m);
  } else if (m>1){
    printf("(%d minutos)\n", m);
  }
}

int main(void) {
  int h, m, acres;
  scanf("%d:%d %d", &h, &m, &acres);
  somaMinutos(h, m, acres);
  return 0;
}
