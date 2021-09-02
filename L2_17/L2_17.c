#include <stdio.h>
#include <string.h>

int main(){
    int o, k, i;
    char str[1000];
    scanf("%d %d", &o, &k);
    if (o != 1 && o!= 2){
      printf("Operacao invalida.");
      return 0;
    }

    if(k>26){
      k = k%26;
    }
    scanf("%[^.]", str);
    //cripto
    if (o == 1){
    for(i=0; i<strlen(str); i++){
      if(str[i]>=97 && str[i]<=122){
        str[i]+=k;
        if (str[i]>122){
          str[i]-=26;
        }
      }
    }
    }
    //decripto
    if (o == 2){
      for(i=0; i<strlen(str); i++){
      if(str[i]>=97 && str[i]<=122){
        str[i]-=k;
        if (str[i]<97){
          str[i]+=26;
        }
      }
    }
    }

    printf("%s.", str);

return 0;
}
