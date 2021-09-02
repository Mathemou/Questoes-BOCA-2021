#include <stdio.h>

typedef struct info_produtos{
  int cod;
  float pre;
  int qnt;
}tProduto;

tProduto LeProduto(){
  tProduto p;
  scanf("%d;%f;%d", &p.cod, &p.pre, &p.qnt);
  return p;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2){
if(p1.pre>p2.pre){
  return 1;
} else {
  return 0;
}
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2){
if(p1.pre<p2.pre){
  return 1;
} else {
  return 0;
}
}

int TemProdutoEmEstoque(tProduto p){
if (p.qnt>0){
  return 1;
} else {
  return 0;
}
}

void ImprimeProduto(tProduto p){
  printf("COD %d, PRE %.2f, QTD %d\n", p.cod, p.pre, p.qnt);
}
int main(void) {
  tProduto p;
  tProduto maiorp = {-1, -1, -1};
  tProduto menorp = {-1, 32000, -1};
  int n, i=0;
  scanf("%d", &n);
  for (i=0;i<n;i++){
    p = LeProduto();
    if (!TemProdutoEmEstoque(p)){
      printf("FALTA:");
      ImprimeProduto(p);
    }
    if (EhProduto1MaiorQ2(p, maiorp)){
      maiorp = p;
    }
    if (EhProduto1MenorQ2(p, menorp)){
      menorp = p;
    }
    //ImprimeProduto(p);
  }
  printf("MAIOR:COD %d, PRE %.2f, QTD %d\n", maiorp.cod, maiorp.pre, maiorp.qnt);
  printf("MENOR:COD %d, PRE %.2f, QTD %d\n", menorp.cod, menorp.pre, menorp .qnt);
  return 0;
}
