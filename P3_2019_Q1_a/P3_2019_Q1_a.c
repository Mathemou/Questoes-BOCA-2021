#include <stdio.h>

typedef struct Lista{
  int n[100];
  int tam;
}tLista;

tLista LeLista();

void ImprimeLista(tLista l);

void ImprimeListaPareados(tLista l1, tLista l2);

int main(void) {
  tLista l1;
  tLista l2;
  l1 = LeLista();
  l2 = LeLista();
  ImprimeListaPareados(l1, l2);
  return 0;
}

tLista LeLista(){
  tLista l;
  int i=0;
  scanf("%d", &l.tam);
  for (i=0;i<l.tam;i++){
    scanf("%d", &l.n[i]);
  }
  return l;
}

void ImprimeLista(tLista l){
  int i=0;
  for(i=0;i<l.tam;i++){
    printf("%d ", l.n[i]);
  }
  printf("\n");
}

void ImprimeListaPareados(tLista l1, tLista l2){
  int i=0, j=0;
  printf("PARES:\n");
  for (i=0;i<l1.tam;i++){
    if (j>=l2.tam){
      j=0;
    }
    printf("%d - %d\n", l1.n[i], l2.n[j]);
    j++;
  }
}
