#include <stdio.h>
#include <math.h>

int main(){
    int n, m, i2, f2;
    scanf("%d %d", &n, &m);
    n++;
    for(; n<m;n++){
        f2 = (int) n/100;
        i2 = n%100;
        if (pow(f2+i2, 2)==n){
          printf("%d\n", n);
        }
    }
return 0;
}

