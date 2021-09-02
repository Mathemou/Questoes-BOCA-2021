
#include <stdio.h>

int main(){
int x, y, ulti_x;

scanf("%d", &x);
scanf("%d", &y);

if (y%x==0){
    ulti_x = x;
}
else if(x>=y){
    ulti_x = y;
} else if (x<y){
    ulti_x = (y % x);
}
printf("RESP:%d", ulti_x);
}
