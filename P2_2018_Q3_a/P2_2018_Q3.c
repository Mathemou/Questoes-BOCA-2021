#include <stdio.h>
void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

double LeNotasECalculaMediaAluno (){
  double n, a, nota, media=0, cont=0, menor=100;
  while(scanf("%lf", &nota)==1){
        cont++;
        media+=nota;
        if(nota<menor){
          menor = nota;
        }
  }
  if (cont>1){
    media-=menor;
    media/=(cont-1);
  }
  return media;
}

int ContaAlunosAprovadosTurma(){
  int a, j, cont_al_ap=0;
  char no, sn;
  double media;
  scanf("%d", &a);
    flush_in();
    for(j=1;j<=a;j++){
      scanf("%c%c[", &no, &sn);
      media = LeNotasECalculaMediaAluno();
      if (media>=70){
        printf("%c\n", no);
        cont_al_ap++;
      }
      flush_in();
    }
  return cont_al_ap;
}

int main(void) {
  int n, a, nota, maior_turma=0, menor_turma=100, aux, idma, idme;
  double media;
  int i=0, j=0, cont=0;
  char no, sn;
  scanf("%d", &n);
  flush_in();
  for(i=1;i<=n;i++){
    printf("TURMA:%d\n", i);
    aux = ContaAlunosAprovadosTurma();
    if (aux>maior_turma){
      maior_turma=aux;
      idma=i;
    }
    if (aux<menor_turma){
      menor_turma=aux;
      idme=i;
    }
  }
  printf("MAIOR:TURMA %d MENOR:TURMA %d\n", idma, idme);

  return 0;
}
