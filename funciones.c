#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

void carga_fecha(){
    fecha f;
    printf("Dia: ");
    scanf("%d",&f.dia);
    printf("Mes: ");
    scanf("%d",&f.mes);
    printf("A%co: ",164);
    scanf("%d",&f.anio);
}

void menu(){
    int opcion;
    do{
        printf("--MENU AGENCIA DE VIAJES--\n\n");
        printf("1: Gestion de pasajeros");
        printf("\n2: Gestion de destinos");
        printf("\n3: Gestion de reservas");
        printf("\n4: Consultas y listados");
        printf("\n5: Control de vencimientos");
        printf("\n0.SALIR\n");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion){
            case 1: gestion_pasajeros(); break;
            case 2: gestion_destinos(); break;
            case 3: gestion_reservas(); break;
            case 4: consultas(); break;
            case 5: vencimientos(); break;
            case 0: printf("Fin del programa\n");break;
            default: printf("Opcion invalida.\n");
        }
        system("pause");
        system("cls");
    }while(opcion!=0);
}
