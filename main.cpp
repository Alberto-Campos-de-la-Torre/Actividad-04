#include "stdlib.h"
#include "stdio.h"
#include "personaje.h"

#define tam 100


int  numeros5();
void capturar(int veces,char nom[tam][tam]);
void mostrar (int veces,char nom[tam][tam]);

main()
{
	 int veces = 0,op=0,cant,o;
	 char nom[tam][tam];
	 	     
	do
	{
		 printf("\nIngresa la opcion que deseas ejecutar\n1-Suma y promedio de 5 numeros\n");
		 printf("2-Captura y muestra de datos\n3-Estadisticas de personaje\n4-Mostrar heroes\n");
		 printf("5-Salir\n");
		     scanf("%i",&op);
		     
		 switch(op)	
		 {
		     case 1:		   	     
                 numeros5();break;
                 
             case 2:
                     printf("Cuantos datos deseas capturar?\n");
                         scanf("%i",&veces);
             	 capturar(veces,nom);
             	 
             	     printf("Cuantos datos deseas mostar?\n");
                         scanf("%i",&veces);                        
             	 mostrar(veces,nom);break;
             case 3: 
			     do{ 
			             printf("Cuantos heroes deseas agregar?\n");
					         scanf("%i",&cant);
				     if(cant>5)
					     printf("Solo puedes tener 5 heroes!\n");					     
					     
				}while(cant>5);
             	 capturar_personaje(Heroes,cant);
             	     break;
             	      
             case 4:
             	  
				 printf("Ingresa el numero del heroe que deseas visualizar\n");
				     scanf("%i",&o);
					    
					     mostrarestats(o,Heroes);
						 break;

			 case 5: 
			     break;
     }
             
    }while(op!=5);
          	
}

int numeros5()
{
	int num[5],i,suma=0;
	float prom=0;
	     
	             printf("Ingresa 5 numeros para sumar y conocer su promedio\n");
	         
	     for(size_t i=0;i<5;i++)
	     {
	     	scanf("%i",&num[i]);
	     	suma+=num[i];
	     	    
		 }
		    prom=suma/5;
		        
		        printf("Los numeros son\n|");
		        
		for(i=0;i<5;i++)		         
	          	printf("%i|",num[i]);          
	          	
			    printf("\nLa suma total es = %i\nEl promedio es = %.2f\n",suma,prom);	
}

void capturar(int veces,char nom[tam][tam])
{
 	 int i;
	
	     for(i=0;i<veces;i++)
	     {
	         printf("Ingresa el nombre de tu amigo |%i|\n",i+1);
	             fflush(stdin);gets(nom[i]);
	 }
}

void mostrar(int veces,char nom[tam][tam])
{ 
     int i; 
     
         for(i=0;i<veces;i++)
           	 printf("%i-%s\n",i+1,nom[i]);
}

