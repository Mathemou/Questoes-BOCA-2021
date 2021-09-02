#include <stdio.h>
int ehLetraOuNum(char letra){
  if ((letra>=65&&letra<=90)||(letra>=97&&letra<=122)){
    return 1;
  } else if (letra=='1'||letra=='2'||letra=='3'||letra=='4'||letra=='5'||letra=='6'||letra=='7'||letra=='8'||letra=='9'||letra=='0'){
    return 1;
  }
  return 0;
}

char convertLowCase(char letra){
  if (letra>=65&&letra<=90){
    return letra + 32;
  }
  return letra;
}
void saoIguais(char c1, char c2, char c3, char c4){
  if (!ehLetraOuNum(c1)||!ehLetraOuNum(c2)||!ehLetraOuNum(c3)||!ehLetraOuNum(c4)){
    printf("Invalido");
    return;
  }
  c1 = convertLowCase(c1);
  c2 = convertLowCase(c2);
  c3 = convertLowCase(c3);
  c4 = convertLowCase(c4);
  if (c1==c3&&c2==c4){
    printf("IGUAIS");
    return;
  } else {
    printf("DIFERENTES");
  }
}

int main(void) {
  char c1, c2, c3, c4;
  scanf("%c%c %c%c", &c1, &c2, &c3, &c4);
  saoIguais(c1, c2, c3, c4);
  return 0;
}