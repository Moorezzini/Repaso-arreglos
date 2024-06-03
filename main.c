#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]){
    int sumEdad = 0, i, cant=15, cant60=0, cant18=0;
    int edades[cant];
    //Carga del vector//

    for(i=0;i<=14;i++){
        printf("Ingrese la edad del paciente %d: ", i+1);
        scanf("%d", &edades[i]);
        
    }
    for(int i=0;i<=14;i++){
        sumEdad=sumEdad+edades[i];
        if (edades[i]>60){
            cant60++;
        }
        if (edades[i]<18){
            cant18++;
        }

    }

    printf("El promedio de las edades es: %d \n", sumEdad/cant);
    printf("La cantidad de pacientes mayores a 60 anios es: %d \n", cant60);
    printf("La cantidad de pacientes menores de 18 anios es: %d \n", cant18);

    return 0;
}