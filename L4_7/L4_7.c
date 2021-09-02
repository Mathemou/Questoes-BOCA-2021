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

/*tPonto LeXY(){
  tPonto p;
  scanf("%d %d ", &p.x, &p.y);
  return p;
}*/

tReta LePiPf(){
  tReta r;
  scanf("%d %d %d %d", &r.pi.x, &r.pi.y, &r.pf.x, &r.pf.y);
  return r;
}

/*float Distancia(tPonto p1, tPonto p2){
  return sqrt(pow((p2.x-p1.x), 2)+pow((p2.y-p1.y), 2));
}*/

/*void DistReta(tPonto p, tReta r){
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
}*/

int Quadrante(tPonto p){
  if (p.x==0||p.y==0){
    return 0;
  } else if (p.x>0&&p.y>0){
    return 1;
  } else if (p.x<0&&p.y>0){
    return 2;
  } else if (p.x<0&&p.y<0){
    return 3;
  } else if (p.x>0&&p.y<0){
    return 4;
  }
  return 0;
}

void MesmoQuad(tReta r){
  if (r.pi.x==0||r.pi.y==0||r.pf.x==0||r.pf.y==0){
    printf("DIFERENTE\n");
    return;
  }
  if (Quadrante(r.pi)==Quadrante(r.pf)){
    printf("MESMO\n");
  } else {
    printf("DIFERENTE\n");
  }
}

int main(void) {
  tReta r;
  int n, i=0;
  scanf("%d", &n);

  for (i=0;i<n;i++){
    r = LePiPf();
    MesmoQuad(r);
    //printf("Quadrante pi = %d\n", Quadrante(r.pi));
    //printf("Quadrante pf = %d\n", Quadrante(r.pf));
    //printf("\n\n");
  }

  return 0;
}
