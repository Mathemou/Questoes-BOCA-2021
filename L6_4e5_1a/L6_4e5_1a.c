#include <stdio.h>

typedef struct Pacote{
  int cod1;
  int cod2;
  char tam_c;
  int tam;
  char msg[10];
  int cod4;
} tPacote;

tPacote LePacote();

void ImprimePacote(tPacote pacote);

int main(void) {
  int n, i=0;
  scanf("%d", &n);
  tPacote pac[n];
  for(i=0;i<n;i++){
    pac[i] = LePacote();
    ImprimePacote(pac[i]);
    //printf("Até aqui ok, partindo pra próxima!\n");
  }
  return 0;
}

tPacote LePacote(){
  tPacote pac;
  int i=0;
  char lixo[1000];
  scanf("%d %d %c", &pac.cod1, &pac.cod2, &pac.tam_c);
  pac.tam = pac.tam_c -'0';
  for(i=0;i<pac.tam;i++){
    scanf("%c", &pac.msg[i]);
  }
  pac.msg[i]='\0';
  scanf("%[^ 9-0]", lixo);
  scanf("%d\n", &pac.cod4);
  return pac;
}

void ImprimePacote(tPacote pacote){
  printf("PCT: %d,%d,%d,%s,%d\n", pacote.cod1, pacote.cod2, pacote.tam, pacote.msg, pacote.cod4);
}
