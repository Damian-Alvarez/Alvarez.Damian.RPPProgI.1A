#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
 int dia;
 int mes;
 int anio;

}eFecha;

typedef struct{
    int id;
    char descripcion[20];
    float precio;
    eFecha fechaVencimiento;
    int isEmpty;

}eComida;

void duplicarImpares(int numero[]);
void subirVocales(char cadena[]);

int main()
{
    int numeros[2];
    char cadena[100];

    printf(">Ingrese un numero: ");
    scanf("%d",&numeros[0]);

    printf(">Ingrese un numero: ");
    scanf("%d",&numeros[1]);

    duplicarImpares(numeros);

    printf(">Ingrese cadena: \n");
    fflush(stdin);

    gets(cadena);

    subirVocales(cadena);

    return 0;
}

void duplicarImpares(int numero[])
{
    int num;
    for(int i=0; i<2; i++)
    {
        if(numero[i] % 2 == 0)
        {
            printf("El numero no se multiplica.\n");
        }
        else
        {
            printf("el num impar es %d: \n",numero[i]*2);
        }
    }
}

void subirVocales(char cadena[])
{
    for(int i=0;i<strlen(cadena);i++)
    {
        if(cadena[i] == 'a' || cadena[i]  == 'e' ||  cadena[i] == 'i' || cadena[i]  == 'o' ||  cadena[i] == 'u')
        {
            cadena[i] = toupper(cadena[i]);
        }
    }

    printf("La cadena subida es: %s",cadena);
}
