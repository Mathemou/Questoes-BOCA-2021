#include <stdio.h>

 int EhLetra(char c){
   if ((c>=65&&c<=90)||(c>=97&&c<=122)){
     return 1;
   }
  return 0;
 }
 int EhVogal(char c){
   if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
     return 1;
   }
   return 0;
 }
 int ReconheceSimbolo(char c){
   char op;

   return 0;
 }
int main(void) {
  char c;
  int vog=0, letra=0, cons=0, ver=0;
  while(1){
    scanf("%c", &c);
    if (c=='.'){
      break;
    }
    if (c=='*'){
      while(1){
        scanf("%c", &c);
        if (c=='1'){
          scanf("%c", &c);
          if (c=='*'){
            printf("*L:%d V:%d C:%d*", letra, vog, cons);
            ver++;
            vog=0;
            letra=0;
            cons=0;
            //break;
          }
        } else if (c=='2'){
          scanf("%c", &c);
          if (c=='*'){
            printf("*V:%d*", vog);
            ver++;
            vog=0;
            //letra=0;
            //cons=0;
            //break;
          }
        } else if (c=='3'){
          scanf("%c", &c);
          if (c=='*'){
            printf("*C:%d*", cons);
            ver++;
            //vog=0;
            //letra=0;
            cons=0;
            //break;
          }
        } else {
          if (ver==0){
            ver++;
            printf("*ERRO*");
          }
        }
        if (c=='*'){
          ver=0;
          break;
        }
      }
    }
    if (EhLetra(c)){
      if (EhVogal(c)==1){
        vog++;
      } else {
        cons++;
      }
      letra++;
      printf("%c", c);
    }
  }
  printf(".");
  return 0;
}
