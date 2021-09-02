#include <stdio.h>

int main(){
int x, y, n;
scanf("%d %d", &x ,&y);
printf("RESP:");
for(n=x+1;n<y;n++){
  if (n%2==0){
    printf("%d ", n);
  }
}
return 0;
}
