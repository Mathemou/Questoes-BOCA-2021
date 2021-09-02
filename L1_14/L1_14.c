#include <stdio.h>

int main(){
int cord_x1, cord_y1, cord_x2, cord_y2, pont_x, pont_y;
scanf("%d", &cord_x1);
scanf("%d", &cord_y1);
scanf("%d", &cord_x2);
scanf("%d", &cord_y2);
scanf("%d", &pont_x);
scanf("%d", &pont_y);
if (cord_x1 < cord_x2 && cord_y1 < cord_y2){
if (pont_x >= cord_x1 && pont_x<=cord_x2 && pont_y >=cord_y1 && pont_y <=cord_y2){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 > cord_x2 && cord_y1 > cord_y2){
if (pont_x >= cord_x2 && pont_x<=cord_x1 && pont_y >=cord_y2 && pont_y <=cord_y1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 > cord_x2 && cord_y1 < cord_y2){
if (pont_x >= cord_x2 && pont_x<=cord_x1 && pont_y <=cord_y2 && pont_y >=cord_y1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 < cord_x2 && cord_y1 > cord_y2){
if (pont_x >= cord_x1 && pont_x<=cord_x2 && pont_y >=cord_y2 && pont_y <=cord_y1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 == cord_x2 && cord_y1 < cord_y2){
if (pont_y>=cord_y1 && pont_y <=cord_y2 && pont_x == cord_x1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 == cord_x2 && cord_y1 > cord_y2){
if (pont_y>=cord_y2 && pont_y <=cord_y1 && pont_x == cord_x1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 < cord_x2 && cord_y1 == cord_y2){
if (pont_x>=cord_x1 && pont_x <=cord_x2 && pont_y == cord_y1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 > cord_x2 && cord_y1 == cord_y2){
if (pont_x>=cord_x2 && pont_x <=cord_x1 && pont_y == cord_y1){
    printf("Dentro");
} else {
    printf("Fora");
}
} else if (cord_x1 == cord_x2 && cord_y1 == cord_y2){
  if (pont_x==cord_x1 && pont_y==cord_y1){
    printf("Dentro");
  } else {
    printf("Fora");
  }
}

}
