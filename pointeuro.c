void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 7;

    triplePointeur(&nombre); // On envoie l'adresse de nombre � la fonction
    printf("%d", nombre); // On affiche la variable nombre. La fonction a directement modifi� la valeur de la variable car elle connaissait son adresse

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre += 3; // On multiplie par 3 la valeur de nombre
}
