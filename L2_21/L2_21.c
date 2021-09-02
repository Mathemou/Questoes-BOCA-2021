#include <stdio.h>
#include <string.h>

int main(void) {
  int n, i=0, num[10], v;
  char c;
  scanf("%d ", &n);

for(i=1;i<=n;i++){
  scanf("%d ", &num[i]);
}

while(scanf("%c", &c)==1){
    if (c != '"' && c!='%' && c!='\n'){
      switch (c)
      {
        case '1':
        if (1<=n){
        printf("%d", num[1]);
        } else {
        printf("ERRO");
        }
        break;

        case '2':
        if (2<=n){
        printf("%d", num[2]);
        } else {
        printf("ERRO");
        }
        break;

        case '3':
        if (3<=n){
        printf("%d", num[3]);
        } else {
        printf("ERRO");
        }
        break;

        case '4':
        if (4<=n){
        printf("%d", num[4]);
        } else {
        printf("ERRO");
        }
        break;

        case '5':
        if (5<=n){
        printf("%d", num[5]);
        } else {
        printf("ERRO");
        }
        break;

        case '6':
        if (6<=n){
        printf("%d", num[6]);
        } else {
        printf("ERRO");
        }
        break;

        case '7':
        if (7<=n){
        printf("%d", num[7]);
        } else {
        printf("ERRO");
        }
        break;

        case '8':
        if (8<=n){
        printf("%d", num[8]);
        } else {
        printf("ERRO");
        }
        break;

        case '9':
        if (9<=n){
        printf("%d", num[9]);
        } else {
        printf("ERRO");
        }
        break;

        case '0':
        printf("ERRO");

        default:
        if (c!='\n' && c!='0'){
        printf("%c", c);
        }
    }
    }
}

return 0;
}
