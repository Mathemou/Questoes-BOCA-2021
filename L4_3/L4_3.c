#include <stdio.h>
#include <stdlib.h>

typedef struct datas{
  int dia;
  int mes;
  int ano;
}tDatas;

int EhBissexto(int ano){
  if (ano%4==0){
    return 1;
  } else {
    return 0;
  }
}

int diasMes(int mes, int ano){
  if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
    return 31;
  } else if (mes==4||mes==6||mes==9||mes==11){
    return 30;
  } else if (mes==2){
    if (EhBissexto(ano)){
      return 29;
    } else {
      return 28;
    }
  }
  printf("ERROR");
  exit(1);
}

tDatas Incializa(tDatas d){
  tDatas dc;
  dc.ano=d.ano;
  dc.mes=d.mes;
  dc.dia=d.dia;
  if (d.mes>12){
    dc.mes=12;
  } else if (d.mes<1){
    dc.mes=1;
  }
  if (d.dia>diasMes(dc.mes, dc.ano)){
    dc.dia=diasMes(dc.mes, dc.ano);
  } else if (d.dia<1){
    dc.dia=1;
  }
  return dc;
}

tDatas LeData(){
  tDatas d;
  scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  return d;
}

void ImprimeData(tDatas d){
  printf("'%.2d/%.2d/%d'", d.dia, d.mes, d.ano);
  if (EhBissexto(d.ano)){
    printf(":Bisexto\n");
  } else if (!EhBissexto(d.ano)){
    printf(":Normal\n");
  }
}

int main(void) {
  int n, i=0;
  tDatas d;
  scanf("%d", &n);
  for (i=0;i<n;i++){
    d = LeData();
    d = Incializa(d);
    ImprimeData(d);
  }
  return 0;
}
