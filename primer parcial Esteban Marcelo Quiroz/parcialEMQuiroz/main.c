#include <stdio.h>
#include <stdlib.h>
#define TAM 100
#define MAX  51
#define MIN  1
#include "validaciones.h"
#include "../parcialEMQuiroz/actores.h"
#include "../parcialEMQuiroz/elenco.h"

int main()
{
    eActores Actor[TAM]
    inicializarActores(Actor,TAM);
    char respuesta;
    char seguir;
    int id=0;
    char nombre[C];
    char apellido[C];
    char sexo;
    int retorno;


    do
    {
        switch(menuActor())
        {

        case 1:
            system("cls");
            printf("\n\t***ALTA ACTOR***\n\n");
            getString(gets(nombre), "ingrese el nombre del actor(maximo 51 caracteres): ",MIN,MAX);
            getString(gets(Apellido,"Ingrese el Apellido(maximo 51 caracteres): ",MIN,MAX);
            printf("ingrese sexo(m o f): ");
            scanf("%d",&sexo);
            id = genId(id);
            retorno =cargarActor(Actor,TAM,id,nombre,apellido,sexo);
            if(retorno!=-1)
                {
                    printf("El alta del actor se realizo con exito!!!\n");
                }else
                {
                    printf("NO se pudo realizar el ALTA del Actor!!!\n");
                }
            system("pause");
            break;

       case 2:
            system("cls");
            printf("\nMODIFICAR empleado\n\n");

            system("pause");
            break;

        case 3:
            system("cls");
            printf("\nBAJA empleado\n\n");
          //int removeEmployee(emple,TAM, id);
            system("pause");
            break;

        case 4:
            system("cls");
           /* printf("\t***Lista de Empleados***\n\n");
            printEmployees(emple,TAM);*/
            system("pause");
            break;


        case 5:
            system("cls");
            printf("\nDesea salir s/n?: ");
            fflush(stdin);
            scanf("%s",&seguir);
            if(seguir=='s'){
            printf("\n Usted SALIO!!");
            }
            break;
        default:
            printf("/nOpcion incorrecta! \n");
            system("pause");
            fflush(stdin);
        }


    } while(seguir != 's');
    return 0;
}
