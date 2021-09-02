#include <stdio.h>

typedef struct Carro{
  int id;
  int pas;
  char mod[100];
  int km;
  int disp;
  int id_cliente;
} tCarro;

typedef struct Concessionaria{
  int qntCarros;
  tCarro carro[100];
}tConcessionaria;

tCarro LeCarro();

int ObtemNumPassageirosCarro(tCarro carro);

int ObtemKmCarro(tCarro carro);

tConcessionaria LeCarrosConcessionaria();

int ObtemClienteAlugouCarro(tCarro carro);

int EstaDisponivelCarro(tCarro carro);

tCarro AlugaCarro(tCarro carro, int cliente);

tCarro DevolveCarro(tCarro carro);

tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km);

tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente);

int main(void) {
  tConcessionaria concessionaria;
  int cliente, pass, km;
  char op;
  concessionaria = LeCarrosConcessionaria();
  while(scanf("%d,%c\n", &cliente, &op)==2){
    if (op=='A'){
      scanf("%d,%d\n", &pass, &km);
      concessionaria = AlugaCarroConcessionaria(concessionaria, cliente, pass, km);
    } else if (op=='D'){
      concessionaria = DevolveCarroConcessionaria(concessionaria, cliente);
    }
  }
  return 0;
}

tCarro LeCarro(){
  tCarro c;
  scanf("%d %d %s %d\n", &c.id, &c.pas, c.mod, &c.km);
  c.disp=1;
  c.id_cliente=0;
  return c;
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

int EstaDisponivelCarro(tCarro carro){
  return carro.disp;
}

int ObtemClienteAlugouCarro(tCarro carro){
  return carro.id_cliente;
}

tCarro AlugaCarro(tCarro carro, int cliente){
  carro.id_cliente=cliente;
  carro.disp=0;
  return carro;
}

tCarro DevolveCarro(tCarro carro){
  carro.id_cliente=0;
  carro.disp=1;
  return carro;
}

tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km){
  int i=0;
  for(i=0;i<concessionaria.qntCarros;i++){
    if (ObtemNumPassageirosCarro(concessionaria.carro[i])==pass){
      if (ObtemKmCarro(concessionaria.carro[i])<=km){
        if(concessionaria.carro[i].disp==1){
          concessionaria.carro[i]=AlugaCarro(concessionaria.carro[i], cliente);
          printf("Alugado (cliente %d) -> CARRO (%d): %s de %d passageiros e com %d km\n", concessionaria.carro[i].id_cliente, concessionaria.carro[i].id, concessionaria.carro[i].mod,concessionaria.carro[i].pas, concessionaria.carro[i].km);
          return concessionaria;
        }
      } else if (km==-1){
        if(concessionaria.carro[i].disp==1){
          concessionaria.carro[i]=AlugaCarro(concessionaria.carro[i], cliente);
          printf("Alugado (cliente %d) -> CARRO (%d): %s de %d passageiros e com %d km\n", concessionaria.carro[i].id_cliente, concessionaria.carro[i].id, concessionaria.carro[i].mod,concessionaria.carro[i].pas, concessionaria.carro[i].km);
          return concessionaria;
        }
      }
    } else if (pass==-1){
      if (ObtemKmCarro(concessionaria.carro[i])<=km){
        if(concessionaria.carro[i].disp==1){
          concessionaria.carro[i]=AlugaCarro(concessionaria.carro[i], cliente);
          printf("Alugado (cliente %d) -> CARRO (%d): %s de %d passageiros e com %d km\n", concessionaria.carro[i].id_cliente, concessionaria.carro[i].id, concessionaria.carro[i].mod,concessionaria.carro[i].pas, concessionaria.carro[i].km);
          return concessionaria;
        }
      } else if (km==-1){
        if(concessionaria.carro[i].disp==1){
          concessionaria.carro[i]=AlugaCarro(concessionaria.carro[i], cliente);
          printf("Alugado (cliente %d) -> CARRO (%d): %s de %d passageiros e com %d km\n", concessionaria.carro[i].id_cliente, concessionaria.carro[i].id, concessionaria.carro[i].mod,concessionaria.carro[i].pas, concessionaria.carro[i].km);
          return concessionaria;
        }
      }
    }
  }
  printf("Carro Indisponivel\n");
  return concessionaria;
}

tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente){
  int i=0;
  for(i=0;i<concessionaria.qntCarros;i++){
    if (concessionaria.carro[i].id_cliente==cliente){
      concessionaria.carro[i]=DevolveCarro(concessionaria.carro[i]);
      printf("Devolvido (cliente %d) -> CARRO (%d): %s de %d passageiros e com %d km\n", cliente, concessionaria.carro[i].id, concessionaria.carro[i].mod, concessionaria.carro[i].pas, concessionaria.carro[i].km);
    }
  }
  return concessionaria;
}
