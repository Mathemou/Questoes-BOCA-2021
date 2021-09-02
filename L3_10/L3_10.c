#include <stdio.h>

int transformaN(int n){
  if (n>26){
    n = n%26;
  }
  return n;
}

int ehLetra(unsigned char letra){
  if(letra >=97 && letra <=122){
    return 1;
  } else if (letra>=65 && letra <= 90){
    return 1;
  } else {
    return 0;
  }
}

int EhLetraMaiuscula (unsigned char letra){
  if (letra>=65 && letra <=90){
    return 1;
  } else {
    return 0;
  }
}

int EhLetraMinuscula (unsigned char letra){
  if (letra>=97 && letra <=122){
    return 1;
  } else {
    return 0;
  }
}

char Codifica(unsigned char letra, int n){
  if (EhLetraMinuscula(letra)==1){
    letra += n;
    if (letra>122){
      letra -=26;
    }
  } else if (EhLetraMaiuscula(letra)==1){
    letra += (n*2);
    if (letra>90){
      letra-=26;
    }
  }
  return letra;
}

unsigned char Decodifica (unsigned char letra, int n){
  if (EhLetraMinuscula(letra)==1){
    letra -= n;
    if (letra<97){
      letra +=26;
    }
  } else if (EhLetraMaiuscula(letra)==1){
    letra -= (n*2);
    if (letra<65){
      letra +=26;
    }
  }
  return letra;
}

int main(void) {
  int op, n;
  unsigned char letra;

  scanf("%d %d ", &op, &n);

  n = transformaN(n);

  if(op!=1 && op!=2){
    printf("Operacao invalida.");
    return 0;
  }

  while(letra!='.'){
    scanf("%c", &letra);
    if(op==1){
       if (ehLetra(letra)==1){
        letra = Codifica(letra, n);
       }
    } else if (op==2){
      if (ehLetra(letra)==1){
      letra = Decodifica(letra, n);
      }
    }
    printf("%c", letra);

  }
  return 0;
}
