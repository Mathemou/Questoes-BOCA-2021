#include <stdio.h>
int ReduzCodigo(){
  char letra='.';
  int soma=0, uni=0, dez=0, cem=0, mil=0, dezmil=0, num=0, ver=0;
  while(letra!=')'){
    scanf("%c", &letra);
    if (letra==')'&&ver==0){
      return -1;
    }
    ver++;
    num = letra - '0';
    if (num>0){
    soma += num;
    }
  }
  while(soma>9){
    if(soma>=10000){
      dezmil = soma/10000;
      soma = soma%10000;
    }
    if(soma>=1000){
      mil = soma/1000;
      soma = soma%1000;
    }
    if(soma>=100){
     cem = soma/100;
     soma = soma%100;
    }
    if (soma>=10){
      dez = soma/10;
      uni = soma%10;
    }
    soma = dezmil + mil + cem + dez + uni;
    dezmil = 0;
    mil = 0;
    cem = 0;
    uni = 0;
  }
return soma;
}
int main(void) {
  char letra;
  int result, senha=0;
  while(1){
    scanf("%c", &letra);
    if (letra=='('){
      result = ReduzCodigo();
      if (result!=-1){
      printf("[%d]", result);
      senha*=10;
      senha+=result;
      } else {
      printf("[ERRO]");
      }
    } else if (letra!='.'){
    printf("%c",letra);
    } else if (letra=='.'){
      printf("%c SENHA:%d\n", letra, senha);
      break;
    }
  }

  return 0;
}
