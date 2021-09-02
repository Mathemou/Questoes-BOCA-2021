#include <stdio.h>

int main(){
    int n, m, i=2, aux_n, verf=0;
    scanf("%d %d", &n, &m);
    aux_n = n;
    printf("RESP:");
    n++;
    for (;n<m;n++){
      for(i=2;i<m;i++){
        if (n%i==0 && n!=2 && n!=i){
          verf++;
          //printf("%d %d\n", n, i);
        }
      }
      if (verf==0){
        printf("%d ", n);
      }
      verf=0;
    }

return 0;
}

