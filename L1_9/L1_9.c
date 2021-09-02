#include <stdio.h>

int main(){
char l;
int i;
scanf("%c", &l);
if (l >= 97 && l <= 122){
    i = l;
    i-=32;
    l = i;
    printf("%c(%d)", l, i);
} else if (l >= 65 && l <= 90){
    printf("A letra deve ser minuscula!");
} else {
    printf("Nao e letra!");
}
}
