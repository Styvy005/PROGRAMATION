#include <stdio.h>
#include <stdlib.h>


void swap(int *first, int *second) {
    printf("first==%d, second==%d\n", *first, *second);

    int temp = *first;
    *first = *second;   // Affecter la valeur pointée par 'second' à 'first'
    *second = temp; //affecter la valeur temp au pointeur second

    printf("first==%d, second==%d\n", *first, *second);
}


/*
 * Fonction main : le point d'entrée de votre programme.
 */
int main() {

    int a = 10;
    int b = 20;

    swap( &a, &b );
    printf( "a==%d, b==%d\n", a, b );        // Résultat: a==10, b==20

    return EXIT_SUCCESS;

}
