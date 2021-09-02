#include <stdio.h>
void flush_in(){
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int EhLetraMaiuscula(char c){
  if (c>=65&&c<=90){
    return 1;
  } else {
    return 0;
  }
}
 int EhLetraMinuscula(char c){
   if (c>=97&&c<=122){
     return 1;
   } else {
     return 0;
   }
 }
int EhNumero(char c){
  if (c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
    return 1;
  }
    return 0;
}
 int AnalisaSenha(){
  char c, cont_l=0, ver_ma=0, ver_mi=0, ver_sp=0, ver_nu=0;
  while(1){
    scanf("%c", &c);
    if(c==')'){
      break;
    }
    if (EhLetraMaiuscula(c)){
      ver_ma=1;
      //printf("Achei maiuscula\n");
    } else if (EhLetraMinuscula(c)){
      ver_mi=1;
      //printf("Achei minuscula\n");
    } else if (EhNumero(c)){
      ver_nu=1;
      //printf("Achei numero\n");
    } else if (!EhLetraMaiuscula(c)&&!EhLetraMinuscula(c)&&!EhNumero(c)){
      ver_sp=1;
      //printf("Achei especial\n");
    }
    cont_l++;
  }
  if(ver_ma==1&&ver_mi==1&&ver_nu==1&&ver_sp==1&&cont_l>=6){
    return 2;
  } else if (cont_l>=6){
    return 1;
  } else {
    return 0;
  }
 }
int main(void) {
  int result=3, n, id=1, i=0, ver=0, qnt_for=0, qnt_fra=0, qnt_inv=0, maior_for_id, maior_fra_id, maior_inv_id, maior_qnt_for=0, maior_qnt_fra=0, maior_qnt_inv=0;
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    while(1){
      //printf("Insira id(senha)= ");
      scanf("%d(", &id);
      if (ver==0){
        printf("GRUPO %d\n", i);
        ver++;
      }
      if (id==-1){
        break;
      }
      result = AnalisaSenha();
      flush_in();

      if (result==2){
        printf("FORTE\n");
        qnt_for++;
      } else if (result==1){
        printf("FRACA\n");
        qnt_fra++;
      } else if (result==0){
        printf("INVALIDA\n");
        qnt_inv++;
      }
    }
    if (qnt_for>maior_qnt_for){
      maior_qnt_for=qnt_for;
      maior_for_id = i;
    }
    if (qnt_fra>maior_qnt_fra){
      maior_qnt_fra=qnt_fra;
      maior_fra_id = i;
    }
    if (qnt_inv>maior_qnt_inv){
      maior_qnt_inv=qnt_inv;
      maior_inv_id = i;
    }
    ver=0;
    printf("\n");
    qnt_for=0;
    qnt_fra=0;
    qnt_inv=0;
  }
  printf("FORTES: GRUPO(%d) QTD(%d)\nFRACAS: GRUPO(%d) QTD(%d)\nINVALIDAS: GRUPO(%d) QTD(%d)\n", maior_for_id, maior_qnt_for, maior_fra_id, maior_qnt_fra, maior_inv_id, maior_qnt_inv);
  return 0;
}
