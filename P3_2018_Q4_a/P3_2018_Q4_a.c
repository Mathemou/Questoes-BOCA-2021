#include <stdio.h>
#include <string.h>

typedef struct Lista{
  char pal[100][100];
  int tamanho;
  int tamanhompal;
  int posmpal;
}tLista;

tLista LeLista();

void ImprimeMaiores(tLista l);

tLista MaiorPalavra(tLista l);

int main(void) {
  tLista l;
  l = LeLista();
  ImprimeMaiores(l);
  return 0;
}

tLista LeLista(){
  tLista l = {0, 0};
  int i=0;
  while (scanf("%s", l.pal[l.tamanho])==1){
    l.tamanho++;
  }
  return l;
}

void ImprimeMaiores(tLista l){
  int i=0;
  for (i=0;i<l.tamanho;i+=2){
    if(strlen(l.pal[i])>strlen(l.pal[i+1])){
      printf("%s\n", l.pal[i]);
    } else if(strlen(l.pal[i])<strlen(l.pal[i+1])){
      printf("%s\n", l.pal[i+1]);
    }
  }
  l = MaiorPalavra(l);
  if (l.tamanhompal==0){
    printf("MAX:--\n");
  } else {
    printf("MAX:%s\n", l.pal[l.posmpal]);
  }
}

tLista MaiorPalavra(tLista l){
  int i=0;
  l.tamanhompal=0;
  for (i=0;i<l.tamanho;i+=2){
    if(strlen(l.pal[i])>strlen(l.pal[i+1])){
      if (strlen(l.pal[i])>l.tamanhompal){
        l.tamanhompal=strlen(l.pal[i]);
        l.posmpal=i;
      }
    } else if(strlen(l.pal[i])<strlen(l.pal[i+1])){
      if (strlen(l.pal[i+1])>l.tamanhompal){
        l.tamanhompal=strlen(l.pal[i+1]);
        l.posmpal=i+1;
      }
    }
  }
  return l;
}
