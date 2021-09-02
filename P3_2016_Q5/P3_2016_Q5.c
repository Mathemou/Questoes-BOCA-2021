#include <stdio.h>
#include <string.h>

typedef struct AlvoFonte{
  char alvo[100];
  char fonte[100];
} tAF;

tAF ConverteMinuscula(tAF af);

int PodeSerEscrita(tAF af){
  int i=0, j=-1, cont=0;
  for(i=0;i<strlen(af.alvo);i++){
    for(j=j+1;j<strlen(af.fonte);j++){
      if (af.alvo[i]==af.fonte[j]){
        cont++;
        break;
      }
    }
  }
  if (cont==strlen(af.alvo)){
    printf("PODE!\n");
    return 1;
  } else {
    printf("NAO PODE!\n");
    return 0;
  }
}

int main(void) {
  int c, i=0;
  tAF af;
  scanf("%d", &c);
  for(i=0;i<c;i++){
    scanf("%s %s\n", af.alvo, af.fonte);
    af = ConverteMinuscula(af);
    PodeSerEscrita(af);
  }
  return 0;
}

tAF ConverteMinuscula(tAF af){
  int i=0;
  for (i=0;i<strlen(af.alvo);i++){
    if (af.alvo[i]>=65&&af.alvo[i]<=90){
      af.alvo[i]+=32;
    }
  }
  for (i=0;i<strlen(af.fonte);i++){
    if (af.fonte[i]>=65&&af.fonte[i]<=90){
      af.fonte[i]+=32;
    }
  }
  return af;
}
