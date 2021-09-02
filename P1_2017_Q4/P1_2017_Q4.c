#include <stdio.h>
int maiorHora(int h1, int m1, int s1, int h2, int m2, int s2){
  if (h1>h2){
    return 1;
  } else if (h2>h1){
    return 2;
  } else if (h1==h2){
    if (m1>m2){
      return 1;
    } else if (m2>m1){
      return 2;
    } else if (m1==m2){
      if (s1>s2){
        return 1;
      } else if (s2>s1){
        return 2;
      } else if (s1==s2){
        return 0;
      }
    }
  }
  return 404;
}
int main(void) {
  int h1, m1, s1, h2, m2, s2, sum=0;
  scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
  if (maiorHora(h1, m1, s1, h2, m2, s2)==1){
    sum += h1 + m1 + s1;
    if (sum>=10){
      if (sum<100){
        sum = sum/10;
      } else {
        sum = sum/10;
        sum = sum%10;
      }
      printf("RESP:%d", sum);
    } else {
      printf("RESP:0");
    }
  } else if (maiorHora(h1, m1, s1, h2, m2, s2)==2){
    sum += h2 + m2 + s2;
    if (sum>=10){
      if (sum<100){
        sum = sum/10;
      } else {
        sum = sum/10;
        sum = sum%10;
      }
      printf("RESP:%d", sum);
    } else {
      printf("RESP:0");
    }
  } else if (maiorHora(h1, m1, s1, h2, m2, s2)==0){
    printf("IGUAIS");
  }
  return 0;
}
