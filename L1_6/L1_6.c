#include <stdio.h>

int main(){
int n1, n2;
float m;

scanf("%d", &n1);
scanf("%d", &n2);

m = ((float) n1 + n2)/2;

if (m >= 7){
printf("%.1f - Aprovado", m);
} else if (m < 5) {
printf("%.1f - Reprovado", m);
} else {
printf("%.1f - De recuperacao", m);
}

}
