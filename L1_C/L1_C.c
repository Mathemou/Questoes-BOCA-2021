#include <stdio.h>

int main(void) {
  int h1, m1, h2, m2;

  scanf("%d:%d", &h1, &m1);
  scanf("%d:%d", &h2, &m2);

  h2 += h1 ;
  m2 += m1 ;

  if (m2 >= 60){
    m2 -= 60;
    h2++;
  }

  if(h2>=24){
    h2 -= 24;
    printf("+1D");
  }

  printf("(%d:%d)", h2, m2);
  return 0;
}
