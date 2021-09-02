
#include <stdio.h>
#include <string.h>

int main(){
    int L, C, V, i, j, posi_l, posi_c, maior_V;
    int verf=0;
    scanf("%d %d", &L, &C);

    for (i=1; i<=L; i++){
      for(j=1; j<=C; j++){
        scanf("%d", &V);
        if(verf==0){
            maior_V = V;
            posi_c = j;
            posi_l = i;
            verf++;
        }else if (V>maior_V && verf == 1){
          maior_V = V;
          posi_c = j;
          posi_l = i;
        }
      }
    }

  printf("%d (%d, %d)", maior_V, posi_l, posi_c);
return 0;
}
