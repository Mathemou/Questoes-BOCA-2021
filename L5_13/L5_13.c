#include <stdio.h>
#include <stdlib.h>

int ComparaString(char * str1, char * str2);

int tamanhoString(char * str);

int main(){
char str1[1000];
char str2[1000];

while ( scanf("%s", &str1) == 1 && scanf("%s", &str2) == 1){
if ( ComparaString(str1, str2) )
printf("IGUAL\n");
else
printf("DIFERENTE\n");
}
 return 0;
}

int ComparaString(char * str1, char * str2){
  int ver=1;
  if (tamanhoString(str1)==tamanhoString(str2)){
    while(*str1!='\0'){
      if (*str1!=*str2){
        ver=0;
        break;
      }
      str1++;
      str2++;
    }
  } else {
    ver = 0;
  }

  return ver;
}

int tamanhoString(char * str){
  int i=0;
  while(1){
    if (*str=='\0'){
      break;
    }
    str++;
    i++;
  }
  return i;
}
