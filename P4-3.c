#include <stdio.h>
#include <stdlib.h>

int main (){
	int *arreglo, *arreglo2, num, cont;
	printf("¿Cuántos elementos tiene el conjunto?\n");
	scanf("%d",&num);
	//Se reserva la memoria de acuerdo a lo que nesecite el usuario
	arreglo = (int *)malloc (num * sizeof(int));
	//Pide los miembros del arreglo uno por uno
	if (arreglo!=NULL) {
		for (cont=0 ; cont < num ; cont++){
			printf("Inserte el elemento %d del conjunto.\n",cont+1);
			scanf("%d",(arreglo+cont));
		}
		printf("Vector insertado:\n\t[");
		//Se imprimen los datos del arreglo
		for (cont=0 ; cont < num ; cont++){ 
			printf("\t%d",*(arreglo+cont));
		}
		printf("\t]\n");
		printf("Aumentando el tamaño del conjunto al doble.\n");
		//Se duplica el tamaño del arreglo
		num *= 2;
		/*Reserva un nuevo arreglo del doble de tamaño y la primera parte de ese nuevo arreglo seran los datos que estaban
		guardados en el primer arreglo*/
		arreglo2 = (int *)realloc (arreglo,num*sizeof(int));
		//Pide la otra mitad de datos que estaran en el arreglo
		if (arreglo2 != NULL) {
			arreglo=arreglo2;
			for(;cont < num ; cont++){
				printf("Inserte el elemento %d  del conjunto. \n",cont+1);
				scanf("%d",(arreglo2+cont));
			}
			printf("Vector insertado: \n\t[");
			//Se imprimen los datos del nuevo arreglo
			for(cont=0 ; cont < num ; cont++){
				printf("\t%d",*(arreglo2+cont));
			}
			printf("\t]\n");
		}
		free(arreglo);
	}
	return 0;
}
