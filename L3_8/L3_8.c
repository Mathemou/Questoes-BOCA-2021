#include <stdio.h>



int verificaNegativo(int n){
  if (n<0){
    return 1;
  } else {
    return 0;
  }
}
int ehPrimo(int n){
  int aux = 0;

  if(n==2 || n==-2){
    return 1;
  }

  if (n==1 || n==-1){
    return 0;
  }

  if (n==0){
    return 0;
  }

  if (n==4){
    return 0;
  }

  if (verificaNegativo(n)==0){
    for(aux=3; aux<n; aux++){
      if(n%aux==0){
        return 0;
      }
    }
  }
  if (verificaNegativo(n)==1){
    for(aux=-3; aux>n;aux--){
      if(n%aux==0){
        return 0;
      }
    }
  }
  return 1;
}

int transformaPrimo(int n){
  int aux = n;

  if (verificaNegativo(n)==0){
    while(ehPrimo(n)==0){
      n++;
    }
  } else if(verificaNegativo(n)==1){
    while(ehPrimo(n)==0){
      n--;
    }
  }

  if(n>32000||n<-32000){
    return aux;
  }

  return n;
}
int main(void) {
  int c, l, i, j, val, ver=0;

  scanf("%d %d", &l, &c);

  for(i=1;i<=l;i++){
    for(j=1;j<=c;j++){
      scanf("%d", &val);
      if(ver==0){
        printf("\t");
        ver++;
      }
      if(ehPrimo(val)==0){
        val = transformaPrimo(val);
      }
      printf("%d ", val);
    }
    ver=0;
    printf("\n");
  }

  return 0;
}
