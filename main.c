#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {


    char nombre[5][10]={"Luis","Juan","Pablo","Ana","Maria"};
    char codigo[5][10]={"A0001","A0002","A0003","A0004","A0005"};
    int edad[5]={23,25,18,20,19};

    char id[10];


    printf("Ingrese el codigo del estudiante que desea buscar: ");
    scanf("%s",&id);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(codigo[i],id)==0)
        {
            printf("El nombre del estudiante es: %s\n",nombre[i]);
            printf("El codigo del estudiante es: %s\n",codigo[i]);
            printf("La edad del estudiante es: %d\n",edad[i]);
            return 0;
        }
    }
    printf("El estudiante no existe\n");   
    
    return 0;
}