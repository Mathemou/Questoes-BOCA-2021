#include <stdio.h>

int main(){
  //número de delegacoes---------------------------------------------------------
  int n, i;
  //variaveis a serem avaliadas--------------------------------------------------
  int id, n1, n2 , n3, on1, on2, on3;
  char s;



  scanf("%d", &n);


  //melhores resultados----------------------------------------------------------
  int id_mm[n], id_mf[n];
  int mn1m[n], mn2m[n], mn3m[n], mn1f[n], mn2f[n], mn3f[n];
  int nota_del_m[n], nota_del_f[n];
  int i_del_camp_m, i_del_camp_f;

  //zerar as variaveis-----------------------------------------------------------
  for(i=1;i<=n;i++){
    mn1m[i]=0;
    mn2m[i]=0;
    mn3m[i]=0;
    mn1f[i]=0;
    mn2f[i]=0;
    mn3f[i]=0;
    nota_del_m[i] = 0;
    nota_del_f[i] = 0;
  }


  //piores resultados------------------------------------------------------------
  int id_pm[n], id_pf[n];
  int pn1m[n],pn2m[n],pn3m[n],pn1f[n],pn2f[n],pn3f[n];
  //sobre as variaveis-----------------------------------------------------------
  for(i=1; i<=n; i++){
    pn1m[i]=11;
    pn2m[i]=11;
    pn3m[i]=11;
    pn1f[i]=11;
    pn2f[i]=11;
    pn3f[i]=11;
  }


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
/*printf("Melhor nota: %d\nSegunda melhor nota: %d\nTerceira melhor nota: %d\n\n", on1, on2, on3);*/
//------------------------------------------------------------------------------
nota_del_m[i] += on1;
//DEFINE OS MELHORES ATLETAS MASC.-----------------------------------------------
if (on1>mn1m[i]){
  id_mm[i] = id;
  mn1m[i]=on1;
  mn2m[i]=on2;
  mn3m[i]=on3;

} else if (on1 == mn1m[i]){
  if (on2 > mn2m[i]){
    id_mm[i] = id;
    id_mm[i] = id;
    mn1m[i]=on1;
    mn2m[i]=on2;
    mn3m[i]=on3;

  } else if (on2 == mn2m[i]){
    if (on3 > mn3m[i]){
      id_mm[i] = id;
      id_mm[i] = id;
      mn1m[i]=on1;
      mn2m[i]=on2;
      mn3m[i]=on3;

    }
  }
}
//DEFINE OS PIORES ATLETAS MASC.-------------------------------------------------
if (on1 < pn1m[i]){
  id_pm[i]=id;
  pn1m[i]=on1;
  pn2m[i]=on2;
  pn3m[i]=on3;
} else if (on1 == pn1m[i]){
  if (on2 < pn2m[i]){
    id_pm[i]=id;
    pn1m[i]=on1;
    pn2m[i]=on2;
    pn3m[i]=on3;
  } else if (on2 == pn2m[i]){
    if (on3 <= pn3m[i]){
      id_pm[i]=id;
      pn1m[i]=on1;
      pn2m[i]=on2;
      pn3m[i]=on3;
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
nota_del_f[i] += on1;

//DEFINE AS MELHORES ATLETAS FEMININAS-------------------------------------------
if (on1>mn1f[i]){
  id_mf[i] = id;
  mn1f[i]=on1;
  mn2f[i]=on2;
  mn3f[i]=on3;

} else if (on1 == mn1f[i]){
  if (on2 > mn2f[i]){
    id_mf[i] = id;
    mn1f[i]=on1;
    mn2f[i]=on2;
    mn3f[i]=on3;

  } else if (on2 == mn2f[i]){
    if (on3 > mn3f[i]){
      id_mf[i] = id;
      mn1f[i]=on1;
      mn2f[i]=on2;
      mn3f[i]=on3;

    }
  }
}
//DEFINE AS PIORES ATLETAS FEMININAS---------------------------------------------
if (on1<pn1f[i]){
  id_pf[i]=id;
  pn1f[i] = on1;
  pn2f[i] = on2;
  pn3f[i] = on3;
} else if (on1 == pn1f[i]){
  if (on2 < pn2f[i]){
    id_pf[i]=id;
    pn1f[i] = on1;
    pn2f[i] = on2;
    pn3f[i] = on3;
  } else if (on2 ==  pn2f[i]){
    if (on3 <= pn3f[i]){
      id_pf[i]=id;
      pn1f[i] = on1;
      pn2f[i] = on2;
      pn3f[i] = on3;
    }
  }
}

}//if fem.

}//while

}//for

for (i=1; i<=n;i++){
  printf("MELHORES ATLETAS DA DELEGACAO %d\n", i);
  printf("MASCULINO: %d FEMININO: %d\n", id_mm[i], id_mf[i]);
  printf("PIORES ATLETAS DA DELEGACAO %d\n", i);
  printf("MASCULINO: %d FEMININO: %d\n\n", id_pm[i], id_pf[i]);
}
int aux_ndm = 0, aux_ndf = 0;
for(i=1; i<=n; i++){

  if (nota_del_m[i]>aux_ndm){

    aux_ndm = nota_del_m[i];
    i_del_camp_m = i;
  }

  if (nota_del_f[i]>aux_ndf){

    aux_ndf = nota_del_f[i];
    i_del_camp_f = i;
  }

}

printf("DELECAGAO CAMPEA:\n");
printf("MASCULINO: %d FEMININO: %d", i_del_camp_m, i_del_camp_f);

return 0;
}
