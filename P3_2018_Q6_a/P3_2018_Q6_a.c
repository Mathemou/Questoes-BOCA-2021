#include <stdio.h>

typedef struct Placa{
  char pxl[600][600];
  int a;
  int l;
} tImagem;

tImagem LeImagem();

void ImprimeImagem(tImagem img);

int ContaErros(tImagem img, tImagem tem);

void PrintaErros(int erros);

int main(void) {
  tImagem img;
  tImagem tem;
  img = LeImagem();
  tem = LeImagem();
  PrintaErros(ContaErros(img, tem));
  return 0;
}

tImagem LeImagem(){
  tImagem img;
  int i=0, j=0;
  char c;
  scanf("%d %d\n", &img.a, &img.l);
  for (i=0;i<img.a;i++){
    for(j=0;j<img.l;j++){
      scanf("%c", &img.pxl[i][j]);
    }
    scanf("\n");
  }
  return img;
}

void ImprimeImagem(tImagem img){
  int i=0, j=0;
  for (i=0;i<img.a;i++){
    for(j=0;j<img.l;j++){
      printf("%c", img.pxl[i][j]);
    }
    printf("\n");
  }
}

int ContaErros(tImagem img, tImagem tem){
  int erros=0, i=0, j=0, k=0, l=0, m=0, n=0, ver=0, alt, larg;
  for (i=0;i<img.a;i++){
    for(j=0;j<img.l;j++){
      if (img.pxl[i][j]==tem.pxl[0][0]&&(i<=img.a-tem.a)&&(j<=img.l-tem.l)){
        alt = i;
        larg = j;
        for(m=i;m<tem.a+i;m++){
          for(n=j;n<tem.l+j;n++){
            if(img.pxl[m][n]!=tem.pxl[m-i][n-j]){
              ver=1;
            }
          }
        }
        if (ver==0){
          //printf("%d %d\n", larg, alt);
          erros++;
        }
        ver=0;
      }
    }
  }
  return erros;
}

void PrintaErros(int erros){
  printf("RESP:%d", erros);
}
