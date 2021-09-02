#include <stdio.h>
int EhDigito(char c){
  if (c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
    return 1;
  }
    return 0;
}

void ImprimePorExtenso(char digito){
  if (digito=='0'){
    printf("zero");
  } else if (digito=='1'){
    printf("um");
  } else if (digito=='2'){
    printf("dois");
  } else if (digito=='3'){
    printf("tres");
  } else if (digito=='4'){
    printf("quatro");
  } else if (digito=='5'){
    printf("cinco");
  } else if (digito=='6'){
    printf("seis");
  } else if (digito=='7'){
    printf("sete");
  } else if (digito=='8'){
    printf("oito");
  } else if (digito=='9'){
    printf("nove");
  }
}
int main(void) {
  char letra, terminador, sucessor, anterior;
  scanf("%c ", &terminador);
  while(1){
    scanf("%c", &letra);
    if (letra==terminador){
      break;
    }
    if (EhDigito(letra)){
      scanf("%c", &sucessor);
      if (!EhDigito(sucessor)&&!EhDigito(anterior)){
        ImprimePorExtenso(letra);
        if (sucessor==terminador){
          break;
        } else {
        printf("%c", sucessor);
        }
        letra = sucessor;
      } else {
        printf("%c", letra);
        if (sucessor==terminador){
          break;
        } else {
        printf("%c", sucessor);
        }
        letra = sucessor;
      }
    } else {
      printf("%c", letra);
    }
    anterior = letra;
  }
  return 0;
}
