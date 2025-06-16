#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

void gestion_pasajeros
{
    system("cls");
    int opcion;
    do{
        printf("--MENU GESTION DE PASAJEROS--\n\n");
        printf("1: Alta de pasajero");
        printf("\n2: Modificar pasajero");
        printf("\n3: Baja de pasajero");
        printf("\n4: Mostrar lista de pasajeros");
        printf("\n0. MENU PRINCIPAL\n");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion){
            case 1: alta_p(); break;
            case 2: modificacion_p(); break;
            case 3: baja_p(); break;
            case 4: mostrar_p(); break;
            case 0: /*volver al menu principal*/;break;
            default: printf("Opcion invalida.\n");
        }
        system("pause");
        system("cls");
    }while(opcion!=0);
}
