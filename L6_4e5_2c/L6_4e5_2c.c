#include <stdio.h>

typedef struct Cartela{
  int id;
  int tam;
  int num[100][100];
}tCartela;

typedef struct Partida{
  int qntCartelas;
  tCartela cartela[20];
  tCartela original[20];
}tPartida;

tCartela LeCartela();

tCartela ResetaCartela(tCartela original);

tPartida LeCartelasPartida();

tPartida ResetaPartida(tPartida partida);

void JogaPartida(tPartida partida);

tCartela MarcaCartela(tCartela cartela, int num);

int VenceuCartela(tCartela cartela);

void ImprimeCartela(tCartela cartela);

int main(){
  tPartida partida;
  int qtdPartidas, i;

  partida = LeCartelasPartida();

  scanf ("%d", &qtdPartidas);
  for (i = 0; i < qtdPartidas; i++){
      if ( i!=0 ) printf("\n");
      printf("PARTIDA %d\n", i+1);

      partida = ResetaPartida(partida);

      JogaPartida(partida);
  }

return 0;
}

void ImprimeCartela(tCartela cartela){
  int i=0, j=0;
  printf("ID:%d\n", cartela.id);
  for(i=0;i<cartela.tam;i++){
    for(j=0;j<cartela.tam;j++){
      printf("%.3d", cartela.num[i][j]);
      if (j!=cartela.tam-1){
        printf("|");
      }
    }
    printf("\n");
  }
}
//-------------------------------------------------------
tPartida LeCartelasPartida(){
  tPartida partida;
  int i=0;
  scanf("%d", &partida.qntCartelas);
  for (i=0;i<partida.qntCartelas;i++){
    partida.cartela[i]=LeCartela();
    partida.original[i]=partida.cartela[i];
  }
  return partida;
}
//-------------------------------------------------------------
tCartela LeCartela(){
  tCartela cartela;
  int i=0, j=0;
  scanf("%d %d", &cartela.id, &cartela.tam);
  for(i=0;i<cartela.tam;i++){
    for(j=0;j<cartela.tam;j++){
      scanf("%d", &cartela.num[j][i]);
    }
  }
  return cartela;
}
//--------------------------------------------------------------
tPartida ResetaPartida(tPartida partida){
  int i=0;
  for (i=0;i<partida.qntCartelas;i++){
    partida.cartela[i] = partida.original[i];
  }
  return partida;
}

tCartela ResetaCartela(tCartela original){
  return original;
}

int VenceuCartela(tCartela cartela){
  int i=0, j=0, pnts=0;
  for(i=0;i<cartela.tam;i++){
    for(j=0;j<cartela.tam;j++){
      if(cartela.num[j][i]==-1){
        pnts++;
      }
    }
  }
  if (pnts==(cartela.tam*cartela.tam)){
    return 1;
  } else {
    return 0;
  }
}

tCartela MarcaCartela(tCartela cartela, int num){
  int i=0, j=0;
  for(i=0;i<cartela.tam;i++){
    for(j=0;j<cartela.tam;j++){
      if(cartela.num[j][i]==num){
        cartela.num[j][i]=-1;
      }
    }
  }
  return cartela;
}

void JogaPartida(tPartida partida){
  int num[100],n, i=0, qtdNum, j, qtdVencedores=0, k=0;
  while(1){
    scanf("%d ", &num[i]);
    if (num[i]==-1){
      break;
    }
    i++;
  }
  scanf("\n");
  qtdNum=i;

  for(i=0;i<qtdNum;i++){
    for(j=0;j<partida.qntCartelas;j++){
      partida.cartela[j]=MarcaCartela(partida.cartela[j], num[i]);
    }
    for(k=0;k<partida.qntCartelas;k++){
        if(VenceuCartela(partida.cartela[k])==1){
          if(qtdVencedores==0){
            printf("COM VENCEDOR\n");
          }
          ImprimeCartela(partida.original[k]);
          qtdVencedores++;
        }
      }
      if (qtdVencedores>0){
        break;
      }
  }
if (qtdVencedores==0){
  printf("SEM VENCEDOR\n");
}
}
