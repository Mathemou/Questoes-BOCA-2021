#include <stdio.h>
int ehLetra(char c){
  if ((c>=65&&c<=90)||(c>=97&&c<=122)){
    return 1;
  } else {
    return 0;
  }
}
int ehNumero(char c){
  if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
    return 1;
  } else {
    return 0;
  }
}
int verificaLetras(char l1, char l2, char l3){
  if (ehLetra(l1)==1&&ehLetra(l2)==1&&ehLetra(l3)==1){
    return 1;
  } else {
    return 0;
  }
}
int verificaNumeros(char n1, char n2, char n3, char n4){
  if (ehNumero(n1)==1&&ehNumero(n2)==1&&ehNumero(n3)==1&&ehNumero(n4)==1){
    return 1;
  } else {
    return 0;
  }
}
int main(void) {
  char l1, l2, l3, n1, n2, n3, n4;

  scanf("%c%c%c-%c%c%c%c", &l1, &l2, &l3, &n1, &n2, &n3, &n4);
  if (verificaLetras(l1, l2, l3)==1&&verificaNumeros(n1, n2, n3, n4)==1){
    printf("Codigo valido!");
  } else if (verificaLetras(l1, l2, l3)==0&&verificaNumeros(n1, n2, n3, n4)==0){
    printf("Codigo invalido!Problema nas letras e nos numeros!");
  } else if (verificaLetras(l1, l2, l3)==1&&verificaNumeros(n1, n2, n3, n4)==0){
    printf("Codigo invalido!Problema nos numeros!");
  } else if (verificaLetras(l1, l2, l3)==0&&verificaNumeros(n1, n2, n3, n4)==1){
    printf("Codigo invalido!Problema nas letras!");
  }

  return 0;
}
