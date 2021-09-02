#include <stdio.h>

int area (int x1, int y1, int x2, int y2){
  int base = x2-x1;
  int altura = y2-y1;
  return base*altura;
}

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2){
int a1 = area(r1_x1, r1_y1, r1_x2, r1_y2);
int a2 = area(r2_x1, r2_y1, r2_x2, r2_y2);
int area_dif=0;
int area_total = a1 + a2;

if(r1_x2>r2_x1 && r1_y2>r2_y1){
area_dif = area(r2_x1, r2_y1, r1_x2, r1_y2);
}

return area_total - area_dif;
}
int main(void) {
  int x1min,y1min, x1max, y1max, x2min,y2min, x2max, y2max;

  scanf("%d %d %d %d", &x1min, &y1min, &x1max, &y1max);
  scanf("%d %d %d %d", &x2min, &y2min, &x2max, &y2max);
  //printf("%d\n", area(x1min, y1min, x1max, y1max));
  //printf("%d\n", area(x2min, y2min, x2max, y2max));
  printf("RESP:%d", area_total(x1min, y1min, x1max, y1max,x2min, y2min, x2max, y2max));
  return 0;
}
