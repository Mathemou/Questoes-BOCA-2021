#include <stdio.h>

int main(){
float t, resp;
char m;

scanf("%f %c", &t, &m);

if (m == 'c' || m == 'C'){
resp = (t*1.8)+32;
printf("%.2f (F)", resp);
} else if (m == 'f' || m == 'F'){
resp = (t - 32)/1.8;
printf("%.2f (C)", resp);
}

}
