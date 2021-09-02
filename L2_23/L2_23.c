#include <stdio.h>
#include <string.h>

int main(void) {
  char c;
  int i, ver=0, cond=0;

  while(scanf("%c", &c)==1){
    if(cond==0){
    printf("RESP:");
    cond++;
    }
    if (c=='('){
      while(scanf("%c", &c)==1){

        if(c==')'){
        while(scanf("%c", &c)==1){
          if (c==')'){
            printf("%c", c);
          } else {
            if(c=='('){
              printf("%c", c);
            }
            ver=1;
            break;
          }
        }
        }
        if(ver==1){
          ver=0;
          break;
        }
        printf("%c", c);

      }
    }


    if(c=='.'){
      break;
    }
  }
  return 0;
}
