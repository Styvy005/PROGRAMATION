#include <stdio.h>
#include <stdlib.h>

int main() {

    int value = 33;
    int * addr = &value;//récuperation de l'adresse de la variable
    *addr = *addr + 1;

    printf( "value == %d\n", addr );

    return EXIT_SUCCESS;
}
