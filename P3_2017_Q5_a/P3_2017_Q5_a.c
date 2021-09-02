#include <stdio.h>

typedef struct Sequencia{
  int tam;
  int n[100];
} tSequencia;

tSequencia Desloca(tSequencia s, int n);

void printaSequencia(tSequencia s);

int main(void) {
  int n, i=0, des;
  char c;
  tSequencia s;
    while(scanf("%d ", &s.tam)==1){
      for (i=0;i<s.tam;i++){
        scanf("%d", &s.n[i]);
      }
      while(1){
      scanf("%d", &des);
      if (des==-1){
        break;
      }
      s = Desloca(s, des);
      printaSequencia(s);
      }
    }
  return 0;
}

tSequencia Desloca(tSequencia s, int n){
  tSequencia ns;
  ns.tam=s.tam;
  int i=0, aux;
  for(i=0;i<s.tam;i++){
    if((i+n)<s.tam){
      ns.n[i+n]=s.n[i];
    } else {
      ns.n[(i+n)-s.tam]=s.n[i];
    }
  }
  return ns;
}

void printaSequencia(tSequencia s){
  int i=0;
  for(i=0;i<s.tam;i++){
    printf("%d", s.n[i]);
    if (i!=(s.tam-1)){
      printf(" ");
    }
  }
  printf("\n");
}
