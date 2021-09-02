#include <stdio.h>

int main(){
  //n�mero de delegacoes---------------------------------------------------------
  int n, i;
  //variaveis a serem avaliadas--------------------------------------------------
  int id, n1, n2 , n3, on1, on2, on3;
  char s;



  scanf("%d", &n);


  //melhores resultados----------------------------------------------------------
  int id_mm, id_mf;
  int mn1m=0, mn2m=0, mn3m=0, mn1f=0, mn2f=0, mn3f=0;
  int nota_del_m=0, nota_del_f=0;
  int i_del_camp_m=0, i_del_camp_f=0;
  int nota_melhor_delegacao_m = 0, nota_melhor_delegacao_f = 0;

  //piores resultados------------------------------------------------------------
  int id_pm, id_pf;
  int pn1m=11,pn2m=11,pn3m=11,pn1f=11,pn2f=11,pn3f=11;


for(i=1; i<=n; i++){

    while(1){

        scanf("%d", &id);

          if(id == -1){
            break;
          }

        scanf("%c %d %d %d", &s, &n1, &n2, &n3);

if (s == 'M')
{//organizar as notas------------------------------------------------------------
                  if(n1>=n2 && n1>=n3){
                  on1 = n1;
                  if(n2>=n3){
                    on2 = n2;
                    on3 = n3;
                  } else {
                    on2 = n3;
                    on3 = n2;
                  }
                  } else if (n2>=n1 && n2 >= n3){
                  on1 = n2;
                  if (n1>=n3){
                    on2 = n1;
                    on3 = n3;
                  } else {
                    on2 = n3;
                    on3 = n1;
                  }
                  } else {
                  on1 = n3;
                  if (n1>=n2){
                    on2 = n1;
                    on3 = n2;
                  } else {
                    on2 = n2;
                    on3 = n1;
                  }
                  }
//------------------------------------------------------------------------------
nota_del_m += on1;
//DEFINE OS MELHORES ATLETAS MASC.-----------------------------------------------
if (on1>mn1m){
  id_mm = id;
  mn1m=on1;
  mn2m=on2;
  mn3m=on3;

} else if (on1 == mn1m){
  if (on2 > mn2m){
    id_mm = id;
    id_mm = id;
    mn1m = on1;
    mn2m = on2;
    mn3m = on3;

  } else if (on2 == mn2m){
    if (on3 > mn3m){
      id_mm= id;
      id_mm= id;
      mn1m=on1;
      mn2m=on2;
      mn3m=on3;

    }
  }
}
//DEFINE OS PIORES ATLETAS MASC.-------------------------------------------------
if (on1 < pn1m){
  id_pm=id;
  pn1m=on1;
  pn2m=on2;
  pn3m=on3;
} else if (on1 == pn1m){
  if (on2 < pn2m){
    id_pm=id;
    pn1m=on1;
    pn2m=on2;
    pn3m=on3;
  } else if (on2 == pn2m){
    if (on3 <= pn3m){
      id_pm=id;
      pn1m=on1;
      pn2m=on2;
      pn3m=on3;
    }
  }
}


}
else if (s == 'F')
{//organizar as notas------------------------------------------------------------
                  if(n1>=n2 && n1>=n3){
                  on1 = n1;
                  if(n2>=n3){
                    on2 = n2;
                    on3 = n3;
                  } else {
                    on2 = n3;
                    on3 = n2;
                  }
                  } else if (n2>=n1 && n2 >= n3){
                  on1 = n2;
                  if (n1>=n3){
                    on2 = n1;
                    on3 = n3;
                  } else {
                    on2 = n3;
                    on3 = n1;
                  }
                  } else {
                  on1 = n3;
                  if (n1>=n2){
                    on2 = n1;
                    on3 = n2;
                  } else {
                    on2 = n2;
                    on3 = n1;
                  }
                  }
/*printf("Melhor nota: %d\nSegunda melhor nota: %d\nTerceira melhor nota: %d\n\n", on1, on2, on3);*/

//------------------------------------------------------------------------------
nota_del_f += on1;

//DEFINE AS MELHORES ATLETAS FEMININAS-------------------------------------------
if (on1>mn1f){
  id_mf = id;
  mn1f=on1;
  mn2f=on2;
  mn3f=on3;

} else if (on1 == mn1f){
  if (on2 > mn2f){
    id_mf = id;
    mn1f=on1;
    mn2f=on2;
    mn3f=on3;

  } else if (on2 == mn2f){
    if (on3 > mn3f){
      id_mf = id;
      mn1f=on1;
      mn2f=on2;
      mn3f=on3;

    }
  }
}
//DEFINE AS PIORES ATLETAS FEMININAS---------------------------------------------
if (on1<pn1f){
  id_pf=id;
  pn1f = on1;
  pn2f = on2;
  pn3f = on3;
} else if (on1 == pn1f){
  if (on2 < pn2f){
    id_pf=id;
    pn1f = on1;
    pn2f= on2;
    pn3f = on3;
  } else if (on2 ==  pn2f){
    if (on3 <= pn3f){
      id_pf=id;
      pn1f = on1;
      pn2f = on2;
      pn3f = on3;
    }
  }
}

}//if fem.

}//while

  printf("MELHORES ATLETAS DA DELEGACAO %d\n", i);
  printf("MASCULINO: %d FEMININO: %d\n", id_mm, id_mf);
  printf("PIORES ATLETAS DA DELEGACAO %d\n", i);
  printf("MASCULINO: %d FEMININO: %d\n\n", id_pm, id_pf);

    if(nota_del_m>nota_melhor_delegacao_m){
        //printf("\nAntiga melhor nota masculina: %d\n", nota_melhor_delegacao_m);
        nota_melhor_delegacao_m = nota_del_m;
        i_del_camp_m = i;
        //printf("\Nova melhor nota masculina: %d\n", nota_melhor_delegacao_m);

    }

    if (nota_del_f>nota_melhor_delegacao_f){
        //printf("\nAntiga melhor nota feminina: %d\n", nota_melhor_delegacao_f);
        nota_melhor_delegacao_f = nota_del_f;
        i_del_camp_f = i;
        //printf("\Nova melhor nota feminina: %d\n", nota_melhor_delegacao_f);
    }

    mn1m=0;
    mn2m=0;
    mn3m=0;
    mn1f=0;
    mn2f=0;
    mn3f=0;

    pn1m=11;
    pn2m=11;
    pn3m=11;
    pn1f=11;
    pn2f=11;
    pn3f=11;

    nota_del_m = 0;
    nota_del_f = 0;
}//for

printf("DELEGACAO CAMPEA:\n");
printf("MASCULINO: %d FEMININO: %d", i_del_camp_m, i_del_camp_f);
return 0;
}
