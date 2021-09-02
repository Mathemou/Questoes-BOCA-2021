#include <stdio.h>
#include <string.h>

typedef struct Numero{
  char vet[51];
  int tam;
} tNumero;

tNumero LeNum();

void ImprimeNumero(tNumero n);

tNumero SomaNumeros(tNumero n1, tNumero n2);

int EhNumero(char c){
  if (c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int n, i=0, num, j=0, k=0;
  tNumero n1;
  tNumero n2;
  tNumero n3;
  scanf("%d\n", &n);
  for(i=0;i<n;i++){
    n1 = LeNum();
    n2 = LeNum();
    scanf("\n");
    /*ImprimeNumero(n1);
    printf("Tam: %d\n", n1.tam);
    ImprimeNumero(n2);
    printf("Tam: %d\n", n2.tam);
    printf("\n");*/
    n3 = SomaNumeros(n1, n2);
    printf("%s\n", n3.vet);
  }

  return 0;
}

void ImprimeNumero(tNumero n){
  int i=0;
  for (i=0;i<n.tam;i++){
    printf("%c", n.vet[i]);
  }
  printf("\n");
}

tNumero LeNum(){
  tNumero n;
  char c;
  int i=0;
  while(1){
    scanf("%c", &c);
    if (c=='-'){
      scanf("1\n");
      break;
    } else {
      scanf(" ");
    }
    if (EhNumero(c)){
    n.vet[i]=c;
    i++;
    }
  }
  n.tam = i;
  return n;
}

tNumero SomaNumeros(tNumero n1, tNumero n2){
  tNumero r;
  r.tam = n1.tam+1;
  r.vet[r.tam]='\0';
  int res=0, i=0,j=0, s=r.tam-1, v1, v2, aux=0, soma;
  for(i=n1.tam-1,j=n2.tam-1,s=r.tam-1;s>=0;i--,j--,s--){
        v1 = i >= 0 ? n1.vet[i] - '0' : 0;
        v2 = j >= 0 ? n2.vet[j] - '0' : 0;
        soma = v1 + v2 + aux;
        r.vet[s] = soma % 10 + '0';
        aux = soma / 10;
  }

  if(r.vet[0] == '0'){
        for(i=0; r.vet[i]; i++){
            r.vet[i] = r.vet[i+1];
        }
    }
  return r;
}
