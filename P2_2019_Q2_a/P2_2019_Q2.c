#include <stdio.h>
void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int EhFinalDaLista(int n){
  if (n!=-1){
    return 0;
  } else {
    return 1;
  }
}
int EcontraMaiorBuraco(){
  int dbur, maiordbur=-1;
  while(EhFinalDaLista(dbur)==0){
    scanf("%d", &dbur);
    if (dbur>maiordbur){
      maiordbur = dbur;
    }
  }
  if (maiordbur>=0){
  return maiordbur;
  } else {
  return 0;
  }
}
int ContaEsferasGrandes(int maiorBuraco){
  int dbol, qntbol=0;
  while (EhFinalDaLista(dbol)==0){
    scanf("%d", &dbol);
    if (dbol>=maiorBuraco){
      qntbol++;
    }
  }
  return qntbol;
}
int main(void) {
  int maiordbur, qntbol=0;
  maiordbur = EcontraMaiorBuraco();
  flush_in();
  qntbol = ContaEsferasGrandes(maiordbur);
  printf("QTD:%d\n", qntbol);
  return 0;
}
