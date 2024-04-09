#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){
    int i,j;
    int mt[N][M];
    int *ptr;
    ptr = mt;
    srand(time(NULL));

    for(i = 0;i<N; i++)
        {
        for(j = 0;j<M; j++)
            {
            *ptr = 1+rand()%100;
            printf("%d \t", *ptr);
            ptr++;
            }
    printf("\n");
        }
    return 0;
}

