// codigo a completar
#include <stdio.h>
#include <time.h>
#include <string.h>
#define N 20

void main(){
    int i;
    double vt[N];
    srand(time(NULL));
    for (i = 0; i < N; i++){
        vt[i] = 1 + rand() % 100;
        printf("%f\n", vt[i]);
    }
}
