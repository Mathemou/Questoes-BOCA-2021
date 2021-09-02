#include <stdio.h>

int verificaPh(float ph){
  if (ph==7){
    return 0;
  } else if (ph<7){
    return 1;
  } else {
    return 2;
  }
}

int verificaChuvaAcida(float ph){
  if (ph < 5.7){
    return 1;
  } else {
    return 0;
  }
}

float porcentagem(float total, float valor){
  return (100*valor)/total;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal){
  char porc='%';
  if (porcentagemGotasChuvaAcida>=75){
    printf("Chuva Acida %.2f%c %.2f%c", porcentagemGotasChuvaAcida, porc, porcentagemGotasChuvaNormal, porc);
  } else if (porcentagemGotasChuvaNormal>=75){
    printf("Chuva Normal %.2f%c %.2f%c", porcentagemGotasChuvaAcida,porc, porcentagemGotasChuvaNormal, porc);
  } else {
    printf("Chuva com indicios de chuva acida %.2f%c %.2f%c", porcentagemGotasChuvaAcida, porc, porcentagemGotasChuvaNormal, porc);
  }
}

float calculaDist7(float ph){
  float dist = ph-7;
  if (dist<0){
    dist = dist*-1;
  }
  return dist;
}

int main(void) {
  int a, d, t, i=0, gotas_acidas=0, gota_normais=0, qnt_base=0, qnt_neutra=0, qnt_acidas=0;
  float p, pca, pcn, mais_ac=15, mais_ba=-1, mais_ne, dist=7;

  scanf("%d %d %d", &a, &d, &t);

  if((a*d*t)==0){
    printf("Nenhuma gota foi avaliada");
    return 0;
  }

  for(;i<(a*d*t);i++){
    scanf("%f", &p);
    if(verificaPh(p)==1){
      if(verificaChuvaAcida(p)==1){
        gotas_acidas++;
      } else {
        gota_normais++;
      }
    } else {
      gota_normais++;
    }

    switch (verificaPh(p))
      {
        case 0:
          qnt_neutra++;
        break;

        case 1:
          qnt_acidas++;
        break;

        case 2:
          qnt_base++;
        break;
      }

    if(p<mais_ac){
      mais_ac=p;
    }
    if(p>mais_ba){
      mais_ba=p;
    }

    if(calculaDist7(p)<dist){
      dist = calculaDist7(p);
      mais_ne = p;
    }
  }
  pca = porcentagem((a*d*t), gotas_acidas);
  pcn = porcentagem((a*d*t), gota_normais);

  printf("%d %d %d %.2f %.2f %.2f\n", qnt_acidas, qnt_base, qnt_neutra, mais_ac, mais_ba, mais_ne);

  imprimeResultadosAnalise(pca, pcn);
  return 0;
}
