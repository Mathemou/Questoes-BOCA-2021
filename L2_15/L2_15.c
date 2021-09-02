#include <stdio.h>
int main(){
    int n, cont_plus=0, cont_minum=0, soma_plus=0, soma_minum=0;

    while(scanf("%d ", &n)==1) {
      //verifica se o n é positivo ou negativo
      if(n>0){

      cont_plus++;//adidiona um número positivo no contador

      soma_plus+=n;//soma o número positivo no total

    } else if (n<0){
      cont_minum++;//adidiona um número negativo no contador

      soma_minum+=n;//soma o número negativo no total

    }

    }

    printf("%d %d %d %d", cont_minum, cont_plus, soma_minum, soma_plus);

return 0;
}

