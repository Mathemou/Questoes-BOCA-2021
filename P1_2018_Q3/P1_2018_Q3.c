#include <stdio.h>
int ehNumero(char c){
  if (c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
    return 1;
  } else {
    return 0;
  }
}
int validador(char c1, char c2, char c3){
  if ((ehNumero(c1)==1)&&(c2>=97&&c2<=122)&&((c3>=97&&c3<=122)||(c3>=65&&c3<=90))){
    return 1;
  } else {
    return 0;
  }
}
int checaIgualNumELetraMin(char c1, char c2){
  if (c1==c2){
    return 1;
  } else{
    return 0;
  }
}
int chegaLetraMascEMin(char c1, char c2){
  if (c1==c2){
    return 1;
  } else if (c1==c2-32||c1==c2+32){
    return 2;
  } else {
    return 0;
  }
}
int main(void) {
  char c1, c2, c3, c4, c5, c6;
  scanf("%c%c%c %c%c%c", &c1, &c2, &c3, &c4, &c5, &c6);
  if (validador(c1, c2, c3)==0||validador(c4, c5, c6)==0){
    printf("Codigo invalido!\n");
    return 0;
  }
  if (checaIgualNumELetraMin(c1, c4)==1){
    printf("I");
  } else {
    printf("D");
  }
  if (checaIgualNumELetraMin(c2, c5)==1){
    printf("I");
  } else {
    printf("D");
  }
  if (chegaLetraMascEMin(c3, c6)==1){
    printf("I\n");
  } else if (chegaLetraMascEMin(c3, c6)==2){
    printf("C\n");
  } else {
    printf("D\n");
  }

  return 0;
}
