#include <stdio.h>

int main(){
    int n, i=2, verf=0;
    scanf("%d", &n);
    for (;i<n;i++){
        if (n%i==0){
            verf++;
        }
    }
    if (verf==0){
          printf("Primo");
        } else {
          printf("Nao primo");
        }
return 0;
}
