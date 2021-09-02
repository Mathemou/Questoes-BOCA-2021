#include <stdio.h>

int main(void) {
  int w,h,a=0,l=0,cont_food=0, cont_horas=0, i=0,k=0;
  scanf("%d %d\n", &w, &h);
  char placai[h][w], placaf[h][w], c='0';

  while(scanf("%c", &c)==1){
    if (c!='\n'){
      placai[a][l]=c;
      if(placai[a][l]=='9'){
        cont_food++;
      }
      l++;
    } else{
      l=0;
      a++;
    }
  }

  /*for(a=0;a<h;a++){
    for(l=0;l<w;l++){
      printf("%c", placai[a][l]);
    }
    printf("\n");
  }*/


  while(cont_food>0){
    for(a=1;a<h-1;a++){
      for(l=1;l<w-1;l++){
        if (placai[a][l]=='9'){
          if (placai[a][l-1]=='0'||placai[a][l+1]=='0'||placai[a+1][l]=='0'||placai[a-1][l]=='0'){
            placaf[a][l]='0';
            cont_food--;
          } else {
            placaf[a][l]='9';
          }
        }else if (placai[a][l]=='0'||placai[a][l-1]=='0'||placai[a][l+1]=='0'||placai[a+1][l]=='0'||placai[a-1][l]=='0'){
          placaf[a][l]='0';
        } else {
          placaf[a][l]='1';
        }
      }
    }
    /*for(a=0;a<h;a++){
    for(l=0;l<w;l++){
      printf("%c", placai[a][l]);
    }
    printf("\n");
  }
  printf("--------------------------\n");*/
    for(a=1;a<h-1;a++){
      for(l=1;l<w+1-1;l++){
        placai[a][l]=placaf[a][l];
      }
    }
    cont_horas++;
  }

  printf("%d\n", cont_horas);
  return 0;
}
