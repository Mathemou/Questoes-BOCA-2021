#include <stdio.h>
int EhProduto(char prd){
  if (prd>=65&&prd<=90){
    return 1;
  } else {
    return 0;
  }
}
int AcabaramOsProdutos(char prd){
  if (prd=='0'){
    return 1;
  } else {
    return 0;
  }
}
int QtdDoProdutoMaisComprado(char p, int maior){
 return 0;
}
int main(void) {
  int cod, maior=0, ver=0, qnt_letra=0, maior_cliente=0, maior_cliente_id;
  char p='P', ult_letra, maior_letra;
  while(1){
    scanf("%d", &cod);
    if (cod==-1){
      break;
    }
    while(1){
      scanf("%c", &p);
      if(EhProduto(p)){
        if (p==ult_letra){
          qnt_letra++;
        } else {
          if(qnt_letra>=maior){
            maior = qnt_letra;
          }
          qnt_letra=0;
          qnt_letra++;
        }
        ult_letra=p;
      }
      if(p=='0'){
        break;
      }

    }
    if(qnt_letra>=maior){
      maior = qnt_letra;
    }
    if (maior>maior_cliente){
      maior_cliente=maior;
      maior_cliente_id = cod;
    }
    maior = 0;
    qnt_letra=0;
  }

  printf("CLIENT:%d QTD:%d", maior_cliente_id, maior_cliente);
  return 0;
}
