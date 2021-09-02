#include <stdio.h>
#include <math.h>
typedef struct ponto{
  int x;
  int y;
}tPonto;

tPonto LeXY(){
  tPonto p;
  scanf("%d %d", &p.x, &p.y);
  return p;
}

float Distancia(tPonto p1, tPonto p2){
  return sqrt(pow((p2.x-p1.x), 2)+pow((p2.y-p1.y), 2));
}

int main(void) {
  tPonto p = {}, aux = {32000, 32000};
  int n, i=0;
  scanf("%d", &n);
  for(i=0;i<n;i++){
  p = LeXY();
  if (aux.x!=32000){
    printf("%.2f\n", Distancia(p, aux));
  } else {
    printf("-\n");
  }
  aux = p;
  }
  //printf("%.2f\n", Distancia(p, aux));
  return 0;
}
