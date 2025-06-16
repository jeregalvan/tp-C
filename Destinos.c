#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

void gestion_destinos()
{
    system("cls");
    int opcion;
    do{
        printf("--MENU GESTION DE DESTINOS--\n\n");
        printf("1: Alta de destino");
        printf("\n2: Modificar destino");
        printf("\n3: Baja de destino");
        printf("\n4: Mostrar lista de destinos");
        printf("\n0. MENU PRINCIPAL\n");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion){
            case 1: alta_d(); break;
            case 2: modificacion_d(); break;
            case 3: baja_d(); break;
            case 4: mostrar_d(); break;
            case 0: /*volver al menu principal*/;break;
            default: printf("Opcion invalida.\n");
        }
        system("pause");
        system("cls");
    }while(opcion!=0);
}
