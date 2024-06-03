#include <stdio.h>
#include "operaciones.h"

int main (int argc, char *argv[]){
    int arr[] = {1, 2, 3, 4};  // El arreglo tiene 4 elementos
    int size = 4;  // Tamaño del arreglo
    int sum = sumArray(arr, size);
    printf("La suma de los elementos del arreglo es %d\n", sum);

    return 0;
}
