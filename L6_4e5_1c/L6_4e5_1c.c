#include <stdio.h>
typedef struct Pacote{
  int cod1;
  int cod2;
  char tam_c;
  int tam;
  char msg[100];
  int cod3;
}tPacote;

tPacote LePacote();

int verificaPacote(tPacote pac);

void ImprimeMensagem(tPacote pacote);

void bubbleSort(tPacote pac[], int n);

int main(void) {
  int n, i=0,j=0;
  scanf("%d", &n);
  tPacote pac[n];
  for(i=0;i<n;i++){
    pac[i] = LePacote();
  }

  bubbleSort(pac, n);

  int cod = pac[0].cod1;

  for(i=0;i<n;i++){
    if(pac[i].cod1!=cod){
      cod = pac[i].cod1;
      printf("\n");
    }
    if(verificaPacote(pac[i])==pac[i].cod3){
      ImprimeMensagem(pac[i]);
    } else {
      printf("##FALHA##");
    }

  }


  return 0;
}

tPacote LePacote(){
  tPacote pac;
  int i=0;
  char lixo[100];
  scanf("%d %d %c", &pac.cod1, &pac.cod2, &pac.tam_c);
  pac.tam = pac.tam_c - '0';
  for (i=0;i<pac.tam;i++){
    scanf("%c", &pac.msg[i]);
  }
  pac.msg[i]='\0';
  scanf("%[^ 9-0]", lixo);
  scanf("%d\n", &pac.cod3);
  return pac;
}

void ImprimeMensagem(tPacote pacote){
  printf("%s", pacote.msg);
}

int verificaPacote(tPacote pac){
  int ver=0, i=0;
  ver+=pac.cod1;
  ver+=pac.cod2;
  ver+=pac.tam;
  for(i=0;i<pac.tam;i++){
    ver+=pac.msg[i];
  }
  return ver;
}

void bubbleSort(tPacote pac[], int n){
  tPacote aux;
  int i=0, j=0;

  for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
      if(pac[j].cod1>pac[j+1].cod1){
        aux = pac[j];
        pac[j]=pac[j+1];
        pac[j+1]=aux;
      } else if (pac[j].cod1==pac[j+1].cod1){
        if(pac[j].cod2>pac[j+1].cod2){
          aux = pac[j];
          pac[j]=pac[j+1];
          pac[j+1]=aux;
        }
      }
    }
  }


}
