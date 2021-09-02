#include <stdio.h>
#include <math.h>
typedef struct pontos{
  int x;
  int y;
} tPontos;

tPontos LeXY(){
  tPontos p;
  scanf("%d %d", &p.x, &p.y);
  return p;
}

int InicializaPonto(int x, int y){
  return 1;
}

void ImprimePontos(int x, int y){
  printf("(%d,%d)", x, y);
  return;
}

int XInverso(int x){
  return x*-1;
}

int YInverso(int y){
  return y*-1;
}

int RetornaX(tPontos p){
  return p.x;
}

int RetornaY(tPontos p){
  return p.y;
}

tPontos Inverso(tPontos p){
  tPontos pi;
  pi.x = XInverso(p.x);
  pi.y = YInverso(p.y);
  return pi;
}

int Distancia(tPontos p1, tPontos p2){
  return sqrt(pow((p2.x-p1.x), 2)+pow((p2.y-p1.y), 2));
}

int Quadrante(tPontos p){
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
int main(void) {
  tPontos p, pi;
  int n, i=0;
  scanf("%d", &n);

  for (i=0;i<n;i++){
    p = LeXY();
    pi = Inverso(p);
    ImprimePontos(p.x, p.y);
    printf(" %d ", Quadrante(p));
    ImprimePontos(pi.x, pi.y);
    printf(" %d", Quadrante(pi));
    printf("\n");
  }

  return 0;
}
