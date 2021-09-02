#include <stdio.h>

typedef struct mapa{
  char cord[600][600];
  int h;
  int w;
}tMapa;

tMapa LeMapa();

void ImprimeMapa(tMapa m);

int CustoMuro(tMapa m);

void ImprimeCusto(tMapa m);

int main(void) {
  tMapa m;
  m = LeMapa();
  ImprimeCusto(m);
  return 0;
}

void ImprimeMapa(tMapa m){
  int i=0, j=0;
  for(i=0;i<m.h;i++){
    for(j=0;j<m.w;j++){
      printf("%c", m.cord[i][j]);
    }
    printf("\n");
  }
}

tMapa LeMapa(){
  tMapa m;
  char c;
  int i=0, j=0;
  scanf("%d %d\n", &m.w, &m.h);
  while(scanf("%c", &c)==1){
    if (c!='\n'){
      m.cord[i][j]=c;
      j++;
    } else if (c=='\n'){
      j=0;
      i++;
    }
  }
  return m;
}

int CustoMuro(tMapa m){
  int custo=0, i=0, j=0;
  for(i=0;i<m.h;i++){
    for(j=0;j<m.w;j++){
      if (m.cord[i][j]=='0'){
      if (m.cord[i][j+1]=='1'||m.cord[i][j-1]=='1'||m.cord[i+1][j]=='1'||m.cord[i-1][j]=='1'||m.cord[i+1][j+1]=='1'||m.cord[i-1][j-1]=='1'||m.cord[i-1][j+1]=='1'||m.cord[i+1][j-1]=='1'){
        custo++;
      }
      }
    }
  }
  return custo;
}

void ImprimeCusto(tMapa m){
  printf("%d\n", CustoMuro(m));
}
