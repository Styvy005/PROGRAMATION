#include <stdio.h>
#include <stdlib.h>
int main() {

    char buffer[12];    /* 12 caractères */
    buffer[0]  = 'H';
    buffer[1]  = 'e';
    buffer[2]  = 'l';
    buffer[3]  = 'l';
    buffer[4]  = 'o';
    buffer[5]  = ' ';
    buffer[6]  = 'W';
    buffer[7]  = 'o';
    buffer[8]  = 'r';
    buffer[9]  = 'l';
    buffer[10] = 'd';
    buffer[11] = '\0';

    printf( "%s\n", buffer );

    return EXIT_SUCCESS;
}
