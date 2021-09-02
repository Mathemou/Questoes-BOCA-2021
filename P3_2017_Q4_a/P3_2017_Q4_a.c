#include <stdio.h>
#include <string.h>

typedef struct Palavra{
  char palavra[100];
  int cont_vogal;
  int cont_consoante;
} tPalavra;

tPalavra ContaVogalEConsoante(tPalavra palavra);

int EhVogalOuConsoante(char letra);

void printaVogais(tPalavra palavra);

void printaConsoantes(tPalavra palavra);

int main(void) {
  tPalavra palavra = {0, 0, 0};
  while(scanf("%s\n", palavra.palavra)==1){
    palavra = ContaVogalEConsoante(palavra);
    if (palavra.cont_vogal==palavra.cont_consoante){
      printf("%s\n", palavra.palavra);
    } else if (palavra.cont_vogal>palavra.cont_consoante){
      printaVogais(palavra);
    } else if (palavra.cont_vogal<palavra.cont_consoante){
      printaConsoantes(palavra);
    }
    palavra.cont_vogal=0;
    palavra.cont_consoante=0;
  }
  return 0;
}

tPalavra ContaVogalEConsoante(tPalavra palavra){
  int i=0;
  for(i=0;i<strlen(palavra.palavra);i++){
    if (EhVogalOuConsoante(palavra.palavra[i])==1){
      palavra.cont_vogal++;
    } else if (EhVogalOuConsoante(palavra.palavra[i])==0){
      palavra.cont_consoante++;
    }
  }
  return palavra;
}

int EhVogalOuConsoante(char letra){
  if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
    return 1;
  } else if ((letra>=65&&letra<=90)||(letra>=97&&letra<=122)){
    return 0;
  } else {
    return -1;
  }
}

void printaVogais(tPalavra palavra){
  int i=0;
  for(i=0;i<strlen(palavra.palavra);i++){
    if (EhVogalOuConsoante(palavra.palavra[i])==1){
      printf("%c", palavra.palavra[i]);
    }
  }
  printf("\n");
}

void printaConsoantes(tPalavra palavra){
  int i=0;
  for(i=0;i<strlen(palavra.palavra);i++){
    if (EhVogalOuConsoante(palavra.palavra[i])==0){
      printf("%c", palavra.palavra[i]);
    }
  }
  printf("\n");
}
