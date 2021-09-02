#include <stdio.h>

int main(){
    int n, m, i=2, verf=0, multi, verf2=0;
    scanf("%d %d", &n, &m);
    n++;
    for (;n<m;n++){
      for(i=2;i<m;i++){
        if (n%i==0 && n!=2 && n!=i){
          verf++;
        }
      }
      if (verf==0){
        for (multi=2; multi<m; multi++){
          if (multi%n==0 && multi != n){
            verf2++;
          }
        }
        printf("%d\n", n);
        if (verf2==0){
          printf("*");
        }
        for (multi=2; multi<m; multi++){
          if (multi%n==0 && multi != n){
            printf("%d ", multi);
          }
        }
        printf("\n");
      }
      verf=0;
      verf2=0;
    }

return 0;
}

