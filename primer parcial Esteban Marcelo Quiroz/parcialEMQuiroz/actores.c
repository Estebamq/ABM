
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include
int menu()
{
    int opcion;;
    system("cls");
    printf("  *** Actores ***\n\n");
    printf("1- Alta datos\n");
    printf("2- Modificar datos\n");
    printf("3- Baja datos\n");
    printf("4- Informar sobre actor\n");
    printf("5- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
int inicializarActores(eActores actores[],int cant)
{
    int retorno = -1;
    int i;

        for(i=0; i<cant; i++)
        {
                    actores[i].isEmpty=LIBRE;
                    retorno = 0;
        }

    return retorno;
}

int genId(int id)
{
    int retorno;
    retorno = id +1;

    return retorno;

}

int cargarActor(eActores actor[],int tam,int id, char nombre[],char apellido[],float salary, int sector)
{
        int i = id-1;
        int retorno =-1;

                if(actor[i].isEmpty==LIBRE)
                    {

                        actor[i].id=id;
                        strcpy(actor[i].nombre,nombre);
                        strcpy(actor[i].apellido,apellido);
                        emple[i].isEmpty=OCUPADO;
                        retorno=0;

                    }


    return retorno;
}

/*int printEmployees(eEmployee emple[],int tam)
{
    int i;
    int retorno =-1;
    printf("\tID\tNOMBRE\tAPELLIDO\tSALARIO           SECTOR\t\n");
    for(i=0;i<tam;i++)
        {
            if(emple[i].isEmpty==OCUPADO)
                {

                    printf("\t%d\t%s\t%s\t%15.2f\t%15d\n", emple[i].id, emple[i].name, emple[i].lastName, emple[i].salary, emple[i].sector);
                    retorno = 0;
                }
        }
    return retorno;
}*/
