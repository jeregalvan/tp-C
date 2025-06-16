#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

void gestion_reservas
{
    system("cls");
    int opcion;
    do{
        printf("--MENU GESTION DE RESERVAS--\n\n");
        printf("1: Alta de reserva");
        printf("\n2: Modificar reserva");
        printf("\n3: Baja de reserva");
        printf("\n4: Mostrar lista de reservas");
        printf("\n0. MENU PRINCIPAL\n");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion){
            case 1: alta_r(); break;
            case 2: modificacion_r(); break;
            case 3: baja_r(); break;
            case 4: mostrar_r(); break;
            case 0: /*volver al menu principal*/;break;
            default: printf("Opcion invalida.\n");
        }
        system("pause");
        system("cls");
    }while(opcion!=0);
}
