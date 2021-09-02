#include <stdio.h>

void limpabuffer(void) // Funçao utilitária para limpar o buffer do teclado (pega da internet)
{
char c;
while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    int n, m, i=0, menor,posi_i=-1,posi_f=-1;
    while (scanf("%d ", &n)==1){
        if(menor>n){
            menor = n;
        }
    }

    limpabuffer();

    while (scanf("%d ", &m)==1){
        //verifica se menor aparece
        if (m==menor && posi_i ==-1){
            posi_i = i;
        }
        if (m==menor && posi_i != -1){
            posi_f = i;
        }
        i++;
    }
    //caso menor só apareça uma vez
    if (posi_f== -1 && posi_i != -1){
        posi_f = posi_i;
    }
    //caso menor não apareça em m
    if (posi_i == -1 && posi_f == -1){
        posi_i = i;
        posi_f = i;
    }
    printf("%d %d %d", menor, posi_i, posi_f);

return 0;
}
