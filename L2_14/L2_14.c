#include <stdio.h>
int main(){
    int i=0;
    char e[1000], c;

    c='.';

    while ((e[i] = getchar()) != c && i < 999){
            if (e[i]=='?'){
                break;
            }
            if (e[i]=='!'){
                break;
            }
            if (e[i]==' '){
                e[i] = 0;
                continue;
            }

    i++;
    }

    e[++i]='\0';
    printf("RESP:%s", e);

return 0;
}

