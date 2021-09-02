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

int ComparaString(char * str1, char * str2);

int tamanhoString(char * str);

int main(){
  int qtdCand, i = 0, lim=0, j=0, k=0, l=0, ver=0, ver2=0, l2=0;
  char sobrenome_atual[21];

  scanf("%d", &qtdCand);
  tCandidato candidatos[qtdCand];
  tCandidato candidatos_lidos[qtdCand];

  for(i = 0; i < qtdCand; i++){
    candidatos[i] = LeCandidato();
  }

  for(i = 0; i < qtdCand; i++){
    for(j=i+1;j < qtdCand;j++){
      if (ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome)){
        for(l=0;l<k;l++){//loop que verifica se já foi printado
          if (candidatos[i].codigo==candidatos_lidos[l].codigo){
            ver=1;
          }
        }
        if (ver==0){
          ImprimeCandidato(candidatos[i]);
          //printf("i\n");
        }
        ver=0;
        for(l=0;l<k;l++){
          if(candidatos[j].codigo==candidatos_lidos[l].codigo){
            ver=1;
          }
        }
        if (ver==0){
          ImprimeCandidato(candidatos[j]);
        }
        ver=0;
        candidatos_lidos[k]=candidatos[j];
        k++;
        candidatos_lidos[k]=candidatos[i];
        k++;
      }
    }
  }

    return 0;
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
  printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}

int ComparaString(char * str1, char * str2){
  int ver=1;
  if (tamanhoString(str1)==tamanhoString(str2)){
    while(*str1!='\0'){
      if (*str1!=*str2){
        ver=0;
        break;
      }
      str1++;
      str2++;
    }
  } else {
    ver = 0;
  }

  return ver;
}

int tamanhoString(char * str){
  int i=0;
  while(1){
    if (*str=='\0'){
      break;
    }
    str++;
    i++;
  }
  return i;
}
