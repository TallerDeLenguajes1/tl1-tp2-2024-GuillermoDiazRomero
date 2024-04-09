#include <stdio.h>
#include <time.h>
typedef struct PC {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} PC;
void main(){
    PC computadora[5];
    srand(time(NULL));
    
    
    for (int i; i < 5; i++){
        computadora[i].velocidad = 1 + rand()%3;
        computadora[i].anio = 2015 +  rand()%9;
        computadora[i].cantidad = 1 + rand()%8;
        printf("PC %d",i);
        printf("Velocidad %d Ghz\n",computadora[i].velocidad);
        printf("Anio %d\n",computadora[i].anio); 
        printf("Cantidad %d\n",computadora[i].cantidad); 
    }


    
}

