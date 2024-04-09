#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// codigo a completar
#define N 20

int main(){
int i;
double vt[N];
double *p = vt;

srand(time(NULL));

    for(i = 1; i<=N ; i++)
    {
    *p = 1 + rand()%100;            // *vt
    printf("%.2lf \t", *p);

    if (i%5 == 0)
    {
        printf("\n");
    }
    
    p++;      //Apuntamos al siguiente elemento    //vt++

    }

    return 0;
}

