#include <stdio.h>
#include <stdlib.h>

// codigo a completar
#define N 20

int main(){
int i;
double vt[N];

srand(time(NULL));

    for(i = 1; i<=N ; i++)
    {
    vt[i] = 1 + rand()%100;
    printf("%.2lf \t", vt[i]);
    if (i%5 == 0)
    {
        printf("\n");
    }
    
    }

    return 0;
}

