#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"

int main()
{
    float x=0;
    float y=0;
    int menu;
    float rSuma,rResta,rMultiplicacion,rDivision, rFactorial1, rFactorial2;
    char continuar='s';


    do
        {
            printf("Los operandos son A= %.1f y B= %.1f\n",x,y);
            printf("Opcion 1: Ingresar 1er operando\n");
            printf("Opcion 2: Ingresar 2do operando\n");
            printf("Opcion 3: Calcular todas las operaciones\n");
            printf("Opcion 4: Informar resultados\n");
            printf("Opcion 5: Salir\n");
            scanf("%d",&menu);
            system("cls");


        switch(menu)
            {
                case 1:
                printf("Ingresar el 1er operando: ");
                scanf("%f", &x);
                break;
                case 2:
                printf("Ingresar el 2do operando: ");
                scanf("%f", &y);
                break;
                case 3:
                rSuma=suma(x,y);
                rResta=resta(x,y);
                rMultiplicacion=multiplicar(x,y);
                if(y!=0)
                {
                  rDivision=dividir(x,y);
                }
                rFactorial1=factorial(x);
                rFactorial2=factorial(y);
                printf("Datos calculados en forma correcta\n\n");
                break;
                case 4:
                printf("El resultado de %.2f + %.2f es: %.2f\n",x,y,rSuma);
                printf("El resultado de %.2f - %.2f es: %.2f\n", x,y,rResta);
                if(y==0)
                {
                  printf("No es posible dividir por cero\n");
                }
                else
                {
                  printf("El resultado de A/B es: %.2f\n",rDivision);
                }
                printf("El resultado de %.2f * %.2f es: %.2f\n", x,y,rMultiplicacion);
                printf("El factorial de %.0f es: %.0f y El factorial de %.0f es: %.0f\n\n",x,rFactorial1,y,rFactorial2);
                break;
                case 5:
                printf("Operacion terminada\n");
                continuar='n';
                break;
                default:
                    printf("Opcion invalida. Seleccione opcion correcta\n\n");
                    break;
            }
        }while(continuar=='s');
        return 0;

}
