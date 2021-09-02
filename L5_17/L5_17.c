#include <stdio.h>
#include <string.h>

int EhLetraOuWhiteSpace(char letra);

int main(void) {
  char texto[500][500], novo_texto[500][500];
 int i=0, j=0, k=0, l=0, m=0, n=0;
  while(scanf("%s", texto[i])==1){
    for(j=0;j<strlen(texto[i]);j++){
      if(texto[i][j]=='-'||texto[i][j]=='('||texto[i][j]==39||texto[i][j]=='"'){
       l++;
       m=0;
      } else if(EhLetraOuWhiteSpace(texto[i][j])==1){
      novo_texto[l][m]=texto[i][j];
      m++;
      }
      //printf("%c {%d, %d}", novo_texto[l][m], l, m);
    }
    i++;
    l++;
    m=0;
  }
  //printf("%c", novo_texto[5][0]);
   for(n=l;n>=0;n--){
     printf("%s ", novo_texto[n]);
   }
  return 0;
}

int EhLetraOuWhiteSpace(char letra){
  if ((letra>=65&&letra<=90)||(letra>=97&&letra<=122)){
    return 1;
  } else if (letra==' '){
    return 2;
  }
  return 0;
}
