#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define OCUPADO 0
#define LIBRE 1

// en descripcion de la pelicula va el nombre.
// no es necesario el codigo del elenc

typedef struct {
    int id;
    char nombre[51];
    char apellido[51];
    char sexo;
    int isEmpty;
}eActores;

typedef struct {
    int codigoDePelicula;
    int codigoActor;
    int valorContrato;
    int isEmpty;
}eElenco;

typedef struct {
    int codigo;
    int idGenero;
    char descripcion;
    int duracion;
    int isEmpty;
}ePeliculas;

typedef struct{
    int id;
    char genero[51];

}eIdGenero;



int menuActor();
int inicializarActores(eActores actor[],int tam);
int cargarActor(eActores actor[],int tam, int id, char nombre[],char apellido[],char sexo);
int genId(int id);
//int printEmployees(eEmployee emple[],int tam);




