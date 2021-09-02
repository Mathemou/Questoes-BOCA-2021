#include <stdio.h>

typedef struct Carro{
  int id;
  int pas;
  char mod[100];
  int km;
} tCarro;

typedef struct Concessionaria{
  int qntCarros;
  tCarro carro[100];
}tConcessionaria;

tCarro LeCarro();

void ImprimeCarro(tCarro carro);

int ObtemNumPassageirosCarro(tCarro carro);

tConcessionaria LeCarrosConcessionaria();

void ListaCarrosConcessionaria(tConcessionaria concessionaria, int pass, int km);

int main(){
  tConcessionaria concessionaria;
  concessionaria = LeCarrosConcessionaria();
  int qtdPassageiros, km, i = 0;
  while(scanf("%d,%d", &qtdPassageiros, &km) == 2){
    printf("Caso %d:\n", ++i);
    ListaCarrosConcessionaria(concessionaria, qtdPassageiros, km);
  }
return 0;
}

tCarro LeCarro(){
  tCarro c;
  scanf("%d %d %s %d\n", &c.id, &c.pas, c.mod, &c.km);
  return c;
}

void ImprimeCarro(tCarro carro){
  printf("CARRO (%d): %s de %d passageiros e com %d km\n", carro.id, carro.mod, carro.pas, carro.km);
}

int ObtemNumPassageirosCarro(tCarro carro){
  return carro.pas;
}

int ObtemKmCarro(tCarro carro){
  return carro.km;
}

tConcessionaria LeCarrosConcessionaria(){
  int n, i=0;
  tConcessionaria concessionaria;
  scanf("%d\n", &n);
  concessionaria.qntCarros = n;
  for(i=0;i<concessionaria.qntCarros;i++){
    concessionaria.carro[i]=LeCarro();
  }
  return concessionaria;
}

void ListaCarrosConcessionaria(tConcessionaria concessionaria, int pass, int km){
  int i=0;
  for(i=0;i<concessionaria.qntCarros;i++){
    if (ObtemNumPassageirosCarro(concessionaria.carro[i])==pass){
      if (ObtemKmCarro(concessionaria.carro[i])<=km){
        ImprimeCarro(concessionaria.carro[i]);
      } else if (km==-1){
        ImprimeCarro(concessionaria.carro[i]);
      }
    } else if (pass==-1){
      if (ObtemKmCarro(concessionaria.carro[i])<=km){
        ImprimeCarro(concessionaria.carro[i]);
      } else if (km==-1){
        ImprimeCarro(concessionaria.carro[i]);
      }
    }
  }
}
