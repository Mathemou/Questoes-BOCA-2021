#include <stdio.h>
typedef struct Matriz{
  char matriz[100][100];
  int alt;
  int larg;
  int tam_oco;
  char tipo_oco;
} tMatriz;

tMatriz LeMatriz();

void ImprimeMatriz(tMatriz m);

int TipoOcorrencia(tMatriz m);

void ImprimeEncontrosVerticais(tMatriz m);

void ImprimeEncontrosHorizontais(tMatriz m);

int main(void) {
  tMatriz m;
  m = LeMatriz();
  //ImprimeMatriz(m);
  if (TipoOcorrencia(m)==1){
    ImprimeEncontrosHorizontais(m);
  } else if (TipoOcorrencia(m)==2){
    ImprimeEncontrosVerticais(m);
  }
  return 0;
}

tMatriz LeMatriz(){
  tMatriz m;
  char c;
  int i=0, j=0;
  scanf("%c%c\n", &c, &m.tipo_oco);
  m.tam_oco = c - '0';
  scanf("%d %d\n", &m.alt, &m.larg);
  for(i=0;i<m.alt;i++){
    for (j=0;j<m.larg;j++){
      scanf("%c", &m.matriz[i][j]);
    }
    scanf("\n");
  }
  return m;
}

void ImprimeMatriz(tMatriz m){
  int i=0, j=0;
  for(i=0;i<m.alt;i++){
    for(j=0;j<m.larg;j++){
      printf("%c", m.matriz[i][j]);
    }
    printf("\n");
  }
  printf("%d\n", m.tam_oco);
}

int TipoOcorrencia(tMatriz m){
  if (m.tipo_oco=='H'){
    return 1;
  } else if (m.tipo_oco=='V'){
    return 2;
  }
  return -404;
}

void ImprimeEncontrosVerticais(tMatriz m){
  int i=0, j=0, k=0, l=0, ver=0, cont=0;
  for(i=0;i<m.alt;i++){
    for(j=0;j<m.larg;j++){
      if (m.matriz[i][j]=='X'){
        for(k=i;k<m.tam_oco+i;k++){
          if(m.matriz[k][j]!='X'){
            ver=1;
          }
        }
        if(ver==0){
          cont++;
        }
        ver=0;
      }
    }
  }
  printf("CONT: V %d\n", cont);
}

void ImprimeEncontrosHorizontais(tMatriz m){
  int i=0, j=0, k=0, l=0, ver=0, cont=0;
  for(i=0;i<m.alt;i++){
    for(j=0;j<m.larg;j++){
      if (m.matriz[i][j]=='X'){
        for(k=j;k<m.tam_oco+j;k++){
          if(m.matriz[i][k]!='X'){
            ver=1;
          }
        }
        if(ver==0){
          cont++;
        }
        ver=0;
      }
    }
  }
  printf("CONT: H %d\n", cont);
}
