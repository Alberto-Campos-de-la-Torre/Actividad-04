#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>
#include <stdlib.h>
#define tam 100
struct Personajes
{	
	char Nom_y_Tip[2][tam];
	int  sal;
	int  fue;
	
}Heroes[5];

unsigned int cont = 0;

void capturar_personaje(struct Personajes *Heroes,int cant) {

int i,j=0;
	 char stats[4][tam]={"Nombre","Tipo","Fuerza","Vida"};
	 
	 do
	 {
	     for(i=0;i<4;i++)
		 {
		 	 printf("\n%s de tu Hero #%i - ",stats[i],j+1);
		 	     if(i<2)
		 	     {
		 	         fflush(stdin);gets((Heroes+j)->Nom_y_Tip[i]);
		 	     }
		 	     if(i==2)
		 	         scanf("%i",&(Heroes+j)->fue);
		 	     if(i==3)
		 	         scanf("%i",&(Heroes+j)->sal);		 	     
		 }
		     
		 j++;
		 
	}while(j<cant);
}

void mostrarestats(int cant,struct Personajes Heroe[5])
{
	 int i;
	 char stats[4][tam]={"Nombre","Tipo","Fuerza","Vida"};
	         
	         printf("Personaje #%i\n",cant);
	     for(i=0;i<4;i++)
		 {
		 	 if(i<2)
		 	 printf("\n%s-%s",stats[i],(Heroe+cant-1)->Nom_y_Tip[i]);
		 	 if(i==2)
		 	 printf("\n%s-%i",stats[i],(Heroe+cant-1)->fue);
		 	 if(i==3)
		 	 printf("\n%s-%i",stats[i],(Heroe+cant-1)->sal);
	}
}

#endif PERSONAJE_H