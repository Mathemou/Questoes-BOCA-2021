#include <stdio.h>

int main(){
char l;
scanf("%c", &l);
if (l == 'a' || l == 'A' || l == 'e' || l == 'E' || l == 'i' || l == 'I' || l == 'o' || l == 'O' || l == 'u' || l == 'U'){
    printf("Vogal");
} else {
    printf("Nao vogal");
}
}
