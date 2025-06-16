#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

typedef struct{
    int dia;
    int mes;
    int anio;
}fecha;

typedef struct cliente{
    int id;
    char nombre[20];
    char apellido[20];
    int dni;
    int edad;
    char email[50];
    int telefono;
}pasajero;

typedef struct lugar{
    int codigo;
    char nombre[50];
    float costo;
}destino;

typedef struct reservaViaje{
    int numero;
    int idPasajero;
    int codigoDestino;
    int estado;
    fecha fechaViaje;
    float costoTotal;
}reserva;

void menu();
void carga_fecha();
void gestion_pasajeros();
void gestion_destinos();
void gestion_reservas();
void consultas();
void vencimientos();

void alta_p();
void modificacion_p();
void baja_p();
void mostrar_p();

void alta_d();
void modificacion_d();
void baja_d();
void mostrar_d();

void alta_r();
void modificacion_r();
void baja_r();
void mostrar_r();

#endif // LIB_H_INCLUDED
