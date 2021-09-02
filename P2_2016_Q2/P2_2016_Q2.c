#include <stdio.h>
int ehPrimo(int n){
  int num_test=2;

  if (n==0){
    return 0;
  }

  if (n==2){
    return 1;
  }
  if (n==1){
    return 0;
  }

  for (num_test=2; num_test<n;num_test++){
    if(n%num_test==0){
      return 0;
    }
  }
  return 1;
}

int MaiorDigitoPrimo(int num){
  int ver, uni, dez, cem, mil, demil, cemil, maior_primo=0;
  if (num<10){
   uni = num;
   if (ehPrimo(uni)==1){
      if (uni>maior_primo){
        maior_primo = uni;
      }
    }
  }else if (num>=10&&num<=99){
    uni = num%10;
    if (ehPrimo(uni)==1){
      if (uni>maior_primo){
        maior_primo = uni;
      }
    }
    dez = num/10;
    if (ehPrimo(dez)==1){
      if (dez>maior_primo){
        maior_primo = dez;
      }
    }
  } else if (num>=100&&num<=999){
    uni = num%10;
    if (ehPrimo(uni)==1){
      if (uni>maior_primo){
        maior_primo = uni;
      }
    }
    dez = num/10;
    dez = dez%10;
    if (ehPrimo(dez)==1){
      if (dez>maior_primo){
        maior_primo = dez;
      }
    }
    cem = num/100;
    if (ehPrimo(cem)==1){
      if (cem>maior_primo){
        maior_primo = cem;
      }
    }
  } else if (num>=1000&&num<=9999){
    uni = num%10;
    if (ehPrimo(uni)==1){
      if (uni>maior_primo){
        maior_primo = uni;
      }
    }
    dez = num/10;
    dez = dez%10;
    if (ehPrimo(dez)==1){
      if (dez>maior_primo){
        maior_primo = dez;
      }
    }
    cem = num/100;
    cem = cem%10;
    if (ehPrimo(cem)==1){
      if (cem>maior_primo){
        maior_primo = cem;
      }
    }
    mil = num/1000;
    if (ehPrimo(mil)==1){
      if (mil>maior_primo){
        maior_primo = mil;
      }
    }
  } else if (num>=10000&&num<=99999){
    uni = num%10;
    if (ehPrimo(uni)==1){
      if (uni>maior_primo){
        maior_primo = uni;
      }
    }
    dez = num/10;
    dez = dez%10;
    if (ehPrimo(dez)==1){
      if (dez>maior_primo){
        maior_primo = dez;
      }
    }
    cem = num/100;
    cem = cem%10;
    if (ehPrimo(cem)==1){
      if (cem>maior_primo){
        maior_primo = cem;
      }
    }
    mil = num/1000;
    mil = mil%10;
    if (ehPrimo(mil)==1){
      if (mil>maior_primo){
        maior_primo = mil;
      }
    }
    demil = num/10000;
    if (ehPrimo(demil)==1){
      if (demil>maior_primo){
        maior_primo = demil;
      }
    }
  } else if (num>=100000&&num<=999999){
    uni = num%10;
    if (ehPrimo(uni)==1){
      if (uni>maior_primo){
        maior_primo = uni;
      }
    }
    dez = num/10;
    dez = dez%10;
    if (ehPrimo(dez)==1){
      if (dez>maior_primo){
        maior_primo = dez;
      }
    }
    cem = num/100;
    cem = cem%10;
    if (ehPrimo(cem)==1){
      if (cem>maior_primo){
        maior_primo = cem;
      }
    }
    mil = num/1000;
    mil = mil%10;
    if (ehPrimo(mil)==1){
      if (mil>maior_primo){
        maior_primo = mil;
      }
    }
    demil = num/10000;
    demil = demil%10;
    if (ehPrimo(demil)==1){
      if (demil>maior_primo){
        maior_primo = demil;
      }
    }
    cemil = num/100000;
    if (ehPrimo(cemil)==1){
      if (cemil>maior_primo){
        maior_primo = cemil;
      }
    }
  }
  return maior_primo;
}
int main(void) {
  int n, soma=0;
  while(scanf("%d ", &n)==1){
    soma+=MaiorDigitoPrimo(n);
  }
  printf("SOMA:%d", soma);
return 0;
}
