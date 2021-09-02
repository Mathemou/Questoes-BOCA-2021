#include <stdio.h>

int main(void) {
  int n1, n2, i=0,j=0,k=0, qnt=0, verf=0;

  scanf("%d", &n1);
  int num1[n1];
  for(i=0;i<n1;i++){
    scanf(" %d", &num1[i]);
  }

  scanf("%d", &n2);
  int num2[n2];
  for(i=0;i<n2;i++){
    scanf(" %d", &num2[i]);
  }

  /*for (i=0;i<n1;i++){
    printf("%d ", num1[i]);
  }
  printf("\n----------------\n");
  for (i=0;i<n2;i++){
    printf("%d ", num2[i]);
  }
  printf("\n----------------\n");*/

  for(i = 0; i < n1; i++ ){
    for( j = i + 1; j < n1; ){
      if(num1[j] == num1[i] ){
        for(k = j; k < n1; k++ ){
          num1[k] = num1[k + 1];
          n1--;
          }
      } else{
                j++;
        }
    }
  }

  for(i = 0; i < n2; i++ ){
    for(j = i + 1; j < n2; ){
      if(num2[j] == num2[i] ){
        for( k = j; k < n2; k++ ){
          num2[k] = num2[k + 1];
          n2--;
        }
      } else{
                j++;
        }
    }
  }

  /*for (i=0;i<n1;i++){
    printf("%d ", num1[i]);
  }
  printf("\n----------------\n");
  for (i=0;i<n2;i++){
    printf("%d ", num2[i]);
  }
  printf("\n----------------\n");*/

  for(i=0;i<n2;i++){
    for(j=0;j<n1;j++){
        if (num1[j]==num2[i]){
          qnt++;
        }
    }
  }

  if (qnt==0){
    printf("NENHUM");
  } else if (qnt>0&&qnt<n1){
    printf("PARCIAL");
  } else if (qnt==n1){
    printf("TODOS");
  }
  return 0;
}
