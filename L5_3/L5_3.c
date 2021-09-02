#include <stdio.h>
int convertePos(int n){
  if (n<0){
    return n*-1;
  }
  return n;
}
int main(void) {
  int n, i=0, dist, mdist=0;
  scanf("%d ", &n);
  int nota[n];
  for (i=0;i<n;i++){
    scanf("%d ", &nota[i]);
  }
  if (n==1){
    printf("IMPOSSIVEL");
    return 0;
  }
  for (i=0;i<n-1;i++){
    dist = convertePos((nota[i]-nota[i+1]));
    if (dist>mdist){
      mdist = dist;
    }
  }
  for (i=0;i<n-1;i++){
    if (convertePos((nota[i]-nota[i+1]))>=mdist){
      printf(" (%d %d)", i, i+1);
    }
  }

  return 0;
}
