#include <stdio.h>

int main(){
int x, y, z, i=0;
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &z);
int n1, n2, n3;
if (x<y && x<z){
    n1 = x;
    printf("N1 = %d,", x);
if (y<z){
    n2 = y;
    printf("N2 = %d,", y);
    n3 = z;
    printf("N3 = %d", z);
} else {
    n2 = z;
    printf("N3 = %d,", z);
    n3 = y;
    printf("N2 = %d", y);
}
} else if (y<x && y<z){
    n1 = y;
    printf("N2 = %d,", y);
if (x<z){
    n2 = x;
    printf("N1 = %d,", x);
    n3 = z;
    printf("N3 = %d", z);
} else {
    n2 = z;
    printf("N3 = %d,", z);
    n3 = x;
    printf("N1 = %d", x);
}
} else if (z<x && z<y){
    n1 = z;
    printf("N3 = %d,", z);
if (x<y){
    n2 = x;
    printf("N1 = %d,", x);
    n3 = y;
    printf("N2 = %d", y);
} else {
    n2 = y;
    printf("N2 = %d,", y);
    n3 = x;
    printf("N1 = %d", x);
}
}
}
