#include <stdio.h>

int main(){
int n, c, r;
scanf("%d %d", &n, &c);
//scanf("%d", &c);

switch (c){
    case 1:
        r = n%100;
        r = r%10;
        if (r%2==0){
            printf("PAR");
        } else {
            printf("IMPAR");
        }
    break;
    case 2:
        r = n%100;
        r = r/10;
        if (r%2==0 || n < 10){
            printf("PAR");
        } else {
            printf("IMPAR");
        }
    break;
    case 3:
        r = n/100;
        if (r%2==0 || n < 100){
            printf("PAR");
        } else {
            printf("IMPAR");
        }
    break;
}
}
