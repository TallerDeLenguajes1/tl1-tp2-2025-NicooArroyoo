#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
} typedef PC;

void listarPCs(PC pcs[], int cantidad);

int main(){
    
    srand(time(NULL));
    int cantidad = 5;
    PC pcs[cantidad];
    int velocidad, anio, cantNucleos;
    char *tipos[] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    char *tipoCpu;
    
    for(int i=0;i<cantidad;i++){
        pcs[i].velocidad = 1 +rand () % 3;
        pcs[i].anio = 2015 + rand() % 10;
        pcs[i].cantidad_nucleos =  1 + rand () % 8;
        pcs[i].tipo_cpu = tipos[rand ()%6];
    }

    listarPCs(pcs,cantidad);

  return 0;
}

void listarPCs(PC pcs[], int n){
  for(int i=0;i<n;i++){
    printf("---- PC %d ----\n",i+1);
    printf("Velocidad: %d Ghz\n",pcs[i].velocidad);
    printf("Anio de fabricacion: %d \n",pcs[i].anio);
    printf("Cantidad de nucleos: %d \n",pcs[i].cantidad_nucleos);
    printf("Tipo de procesador: %s \n\n",pcs[i].tipo_cpu);   
  }
}

