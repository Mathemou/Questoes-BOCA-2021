#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int codigo;
  char sobrenome[21];
  char nome[21];
  int nota;
  int idade;
} tCandidato;

tCandidato LeCandidato();

void ImprimeCandidato(tCandidato candidato);

void OrdenaCrescente(tCandidato * vet, int qtd);

int main(){
  int qtdCand, i = 0, j;
  scanf("%d", &qtdCand);
  tCandidato candidatos[qtdCand];
  for(i = 0; i < qtdCand; i++){
    candidatos[i] = LeCandidato();
  }

  OrdenaCrescente(candidatos, qtdCand);

  for(i = 0; i < qtdCand; i++){
    ImprimeCandidato(candidatos[i]);
  }
  return 0;
}


void OrdenaCrescente(tCandidato * vet, int qtd){
  int i=0, j=0;
  tCandidato aux;
  for(i=0;i<qtd;i++){
      for(j=0;j<qtd;j++){
        if(vet[i].nota>vet[j].nota){
          aux=vet[i];
          vet[i]=vet[j];
          vet[j]=aux;
        } else if (vet[i].nota==vet[j].nota){
          if(vet[i].idade<vet[j].idade){
            aux=vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
          } else if (vet[i].idade==vet[j].idade){
            if (vet[i].codigo<vet[j].codigo){
              aux=vet[i];
              vet[i]=vet[j];
              vet[j]=aux;
            }
          }
        }
      }
  }

}

tCandidato LeCandidato(){
  tCandidato candidato;
  scanf("%*[^{]");
  scanf("%*[{ ]");
  scanf("%d", &candidato.codigo);
  scanf("%*[, ]");
  scanf("%[^,],", candidato.sobrenome);
  scanf("%*[ ]");
  scanf("%[^,],", candidato.nome);
  scanf("%d", &candidato.nota);
  scanf("%*[, ]");
  scanf("%d", &candidato.idade);
  scanf("%*[^\n]\n");
  return candidato;
}

void ImprimeCandidato(tCandidato candidato){
  printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
  candidato.codigo, candidato.nome,
  candidato.sobrenome, candidato.nota, candidato.idade);
}
