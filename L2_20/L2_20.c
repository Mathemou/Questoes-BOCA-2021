#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, d, y, y_minum, y_plus;
  float x, e, f;
  float xmaior, xmenor;
  int ver_pico=0, ver_vale=0;
  scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
  float vale=f+1, pico=f+1;
  for (x=e; x<=f; x++){
    xmaior= x + 1;
    xmenor= x - 1;

    y_minum = (a*pow(xmenor, 3)) + (b*pow(xmenor, 2)) + (c*xmenor) + d;

    y = (a*pow(x, 3)) + (b*pow(x, 2)) + (c*x) + d;

    y_plus = (a*pow(xmaior, 3)) + (b*pow(xmaior, 2)) + (c*xmaior) + d;

    //printf("x=%.0f\n y_minum=%f y=%f y_plus=%f\n\n", x, y_minum, y, y_plus);

    if (y>y_plus && y>y_minum && ver_pico==0){
        pico = x;
        printf("Pico em x=%.f\n", pico);
        ver_pico++;
    }
    if (y<y_plus && y<y_minum && ver_vale==0){
        vale = x;
        if (x!=0){
        printf("Vale em x=%.f\n", vale);
        } else if(x==0){
        printf("Vale em x=0\n");
        }
        ver_vale++;
    }

  }
  if (ver_pico==0){
    printf("Nao ha pico\n");
  }
  if (ver_vale==0){
    printf("Nao ha vale");
  }
  return 0;
}
