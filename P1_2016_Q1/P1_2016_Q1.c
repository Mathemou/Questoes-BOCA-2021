#include <stdio.h>

void diaDeSemana(int n){
  switch (n)
{
   case 1:
     printf("Domingo");
   break;

   case 2:
     printf("Segunda");
   break;

   case 3:
     printf("Terca");
   break;

   case 4:
     printf("Quarta");;
   break;

   case 5:
     printf("Quinta");;
   break;

   case 6:
     printf("Sexta");;
   break;

   case 7:
     printf("Sabado");;
   break;

   default:
     printf("Invalido");
   break;
}
}

int main(void) {
  int n;
  scanf("%d",&n);
  diaDeSemana(n);
  return 0;
}
