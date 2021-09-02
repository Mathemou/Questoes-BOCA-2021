#include <stdio.h>

int main(){

int m, n, i;

scanf("%d %d", &n, &m);

for(i=n+1; i<m; i++){
  if (i%3==0 || i%4==0 || i%7==0){
    printf("%d ", i);
  }
}

return 0;
}

