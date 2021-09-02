#include <stdio.h>
int idRetorno(int id){
  if (id>0&&id<=5){
    return 1;
  } else if (id>5 && id<=10){
    return 2;
  } else {
    return 0;
  }
}

void classificaId(int id1, int id2){
  int ver_id1, ver_id2;
  ver_id1 = idRetorno(id1);
  ver_id2 = idRetorno(id2);
  if (ver_id1==0 || ver_id2==0){
    printf("Invalido");
    return;
  }
  if ((ver_id1==1 && ver_id2==1) && (id1 == id2)){
    printf("Um homem");
    return;
  }
  if ((ver_id1==1 && ver_id2==1) && (id1 != id2)){
    printf("Par de homens");
    return;
  }
  if ((ver_id1==2 && ver_id2==2) && (id1 == id2)){
    printf("Uma mulher");
    return;
  }
  if ((ver_id1==2 && ver_id2==2) && (id1 != id2)){
    printf("Par de mulheres");
    return;
  }
  if ((ver_id1==1 && ver_id2==2)||(ver_id1==2 && ver_id2==1)){
    printf("Um casal");
  }
}

int main(void) {
  int id1, id2;
  scanf("%d %d", &id1, &id2);
  classificaId(id1, id2);
  return 0;
}
