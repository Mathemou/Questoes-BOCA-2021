#include <stdio.h>

int main(){
int x, y;
scanf("%d", &x);
scanf("%d", &y);
if (x > y){
printf("N1 = %d", x);
} else if (y > x){
printf("N2 = %d", y);
} else {
printf("N1 = N2");
}
}
