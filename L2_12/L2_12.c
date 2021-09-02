#include <stdio.h>
#include <string.h>

int main(){
   char letra, cont=0, frase[1000];
   int i;
   while ((frase[i] = getchar()) != '.'
    && frase[i] != '?'
    && frase[i] != '!'
    && i < 999){
     if(frase[i]==' '){
       frase[i] = '_';
     }
     i++;
   }
    frase[++i]='\0';
    printf("RESP:%s", frase);

return 0;
}
