#include <stdio.h>
#include <stdlib.h>

void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

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

tDatas AvancaUmDia(tDatas d){
  if (diasMes(d.mes, d.ano)==31){
    if(d.dia<31){
      d.dia+=1;
    } else if (d.dia==31){
      if (d.mes<12){
        d.dia=1;
        d.mes++;
      } else if (d.mes==12){
        d.dia=1;
        d.mes=1;
        d.ano++;
      }
    }
  } else if (diasMes(d.mes, d.ano)==30){
    if(d.dia<30){
      d.dia++;
    } else if (d.dia==30){
      if (d.mes<12){
        d.dia=1;
        d.mes++;
      } else if (d.mes==12){
        d.dia=1;
        d.mes=1;
        d.ano++;
      }
    }
  } else if (diasMes(d.mes, d.ano)==29){
    if(d.dia<29){
      d.dia+=1;
    } else if (d.dia==29){
      if (d.mes<12){
        d.dia=1;
        d.mes++;
      } else if (d.mes==12){
        d.dia=1;
        d.mes=1;
        d.ano++;
      }
    }
  } else if (diasMes(d.mes, d.ano)==28){
    if(d.dia<28){
      d.dia++;
    } else if (d.dia==28){
      if (d.mes<12){
        d.dia=1;
        d.mes++;
      } else if (d.mes==12){
        d.dia=1;
        d.mes=1;
        d.ano++;
      }
    }
  }
  return d;
}

int EhIgual(tDatas d1, tDatas d2){
  if(d1.dia==d2.dia&&d1.mes==d2.mes&&d1.ano==d2.ano){
    return 1;
  } else {
    return 0;
  }
}

tDatas LeData(){
  tDatas d;
  scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  return d;
}

void ImprimeData(tDatas d){
  printf("'%.2d/%.2d/%d'\n", d.dia, d.mes, d.ano);
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
int main(void) {
  tDatas datai, dataf, dataa;
  datai = LeData();
  datai = Incializa(datai);
  flush_in();
  dataf = LeData();
  dataf = Incializa(dataf);
  for (dataa=datai;!EhIgual(dataa, dataf);dataa=AvancaUmDia(dataa)){
    ImprimeData(dataa);
  }
  return 0;
}
