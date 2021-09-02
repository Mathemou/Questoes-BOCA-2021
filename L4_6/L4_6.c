#include <stdio.h>
#include <math.h>

typedef struct ponto{
  int x;
  int y;
}tPonto;

typedef struct reta{
  tPonto pi;
  tPonto pf;
}tReta;

tPonto LeXY(){
  tPonto p;
  scanf("%d %d ", &p.x, &p.y);
  return p;
}

tReta LePiPf(){
  tReta r;
  scanf("%d %d %d %d", &r.pi.x, &r.pi.y, &r.pf.x, &r.pf.y);
  return r;
}

float Distancia(tPonto p1, tPonto p2){
  return sqrt(pow((p2.x-p1.x), 2)+pow((p2.y-p1.y), 2));
}

void DistReta(tPonto p, tReta r){
  if (Distancia(p, r.pi)>Distancia(p, r.pf)){
    printf("FIM\n");
    return;
  } else if (Distancia(p, r.pi)<Distancia(p, r.pf)){
    printf("INICIO\n");
    return;
  } else {
    printf("EQUIDISTANTE\n");
    return;
  }
}

int main(void) {
  tPonto p;
  tReta r;
  int n, i=0;
  scanf("%d", &n);

  for (i=0;i<n;i++){
    p = LeXY();
    r = LePiPf();
    DistReta(p, r);
  }

  return 0;
}
