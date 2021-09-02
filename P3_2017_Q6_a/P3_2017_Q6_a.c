#include <stdio.h>

typedef struct Placa{
  int a;
  int l;
  char pos[600][600];
} tPlaca;

tPlaca LeImagem();

void ImprimeImagem(tPlaca p);

void ImprimeSoldas(tPlaca p, tPlaca t);

int main(void) {
  tPlaca plac;
  tPlaca temp;
  plac = LeImagem();
  temp = LeImagem();
  ImprimeSoldas(plac, temp);
  return 0;
}

void ImprimeImagem(tPlaca p){
  int i=0, j=0;
  for(i=0;i<p.a;i++){
    for(j=0;j<p.l;j++){
      printf("%c", p.pos[i][j]);
    }
    printf("\n");
  }
}

tPlaca LeImagem(){
  tPlaca p;
  char c;
  int i=0, j=0;
  scanf("%d %d\n", &p.a, &p.l);
  for(i=0;i<p.a;i++){
    for(j=0;j<p.l;j++){
      scanf("%c", &p.pos[i][j]);
    }
    scanf("\n");
  }
  return p;
}

void ImprimeSoldas(tPlaca p, tPlaca t){
  int i=0, j=0, k=0, l=0, m=0, n=0, alt, larg, cont=0;
  for(i=0;i<p.a;i++){
    for(j=0;j<p.l;j++){
      if(p.pos[i][j]==t.pos[m][n]&&j<=p.l-t.l&&i<=p.a-t.a){
        alt=i;
        larg=j;
        for(m=i;m<t.a+i;m++){
          for(n=j;n<t.l+j;n++){
            if(p.pos[m][n]==t.pos[m-i][n-j]){

            } else {
              cont++;
            }
          }
        }
        if (cont==0){
          printf("%d,%d\n", larg, alt);
        }
        cont=0;
        m=0;
        n=0;
      }
    }
  }
}
