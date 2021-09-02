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

void ImprimePacote(tPacote pacote);

int main(void) {
  int n, i=0;
  scanf("%d", &n);
  tPacote pac[n];
  for(i=0;i<n;i++){
    pac[i] = LePacote();
    if(verificaPacote(pac[i])==pac[i].cod3){
      ImprimePacote(pac[i]);
    } else {
      printf("FALHA!\n");
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

void ImprimePacote(tPacote pacote){
  printf("PCT: %d,%d,%d,%s,%d\n", pacote.cod1, pacote.cod2, pacote.tam, pacote.msg, pacote.cod3);
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
