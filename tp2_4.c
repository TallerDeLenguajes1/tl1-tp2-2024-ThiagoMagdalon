#include <stdio.h>
#include <stdlib.h>

struct compu 
{
    int velocidad;        //entre 1 y 3 GHz
    int anio;            //entre 2015 y 2023
    int cantidad;       //entre 1 y 8
    char *tipo_cpu;    //valores del arreglo tipos
};

typedef struct compu computadora;

int main(){
    computadora cpu[5];
    int indice;

    char tipos[6][20]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        cpu[i].velocidad = 1 + rand() % 3;
        cpu[i].anio = 2015 + rand() % 8;
        cpu[i].cantidad = 1 + rand() % 8;;
        indice = 0 + rand() % 6;
        cpu[i].tipo_cpu = tipos[indice];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", cpu[i].velocidad);
        printf("%d \t", cpu[i].anio);
        printf("%d \t", cpu[i].cantidad);
        puts(cpu[i].tipo_cpu);
        printf("\n");
    }
    
}