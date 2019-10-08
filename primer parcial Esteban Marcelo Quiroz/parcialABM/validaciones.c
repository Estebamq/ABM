#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"


void getString(char* input,char message[], int minimo, int maximo)
{
    char producto[minimo][maximo];
            do {
                printf("%s",message);
                gets(input);
            } while(!(strlen(input)>minimo && strlen(input)<maximo));
                strcpy(producto[minimo],input);


}
