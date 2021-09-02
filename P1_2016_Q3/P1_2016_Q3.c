#include <stdio.h>
#include <ctype.h>

int vogal(char c){
  if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
    return 1;
  } else {
    return 0;
  }
}

void respeitaRegras(char c1, char c2, char c3, char c4){
  int verf = 0;
  if (c1 >= 65 && c1 <= 90){
    verf++;
  }
  if (isdigit(c2)){
    verf++;
  }
  if (vogal(c3)==1){
    verf++;
    if(c3>=97){
      c3-=32;
    }
  }
  if (vogal(c4)==0 && c4>=97 && c4<=122){
    verf++;
    c4-=32;
  }
  if (verf==4){
    printf("%c%c%c%c", c1, c2, c3, c4);
    return;
  } else {
    printf("Invalido");
    return;
  }
}



int main(void) {
  char c1, c2, c3, c4;
  scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
  respeitaRegras(c1,c2,c3,c4);
  return 0;
}
