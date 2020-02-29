#include <stdio.h>
#include <stdlib.h>

int main (){
	int *arreglo, num, cont;
	//pide al usuario el numero de elementos del conjunto y guarda el dato en una variable 
	printf("¿Cuantos elementos tiene el conjunto?\n");
	scanf("%d",&num);
	/*
	Se reserva memoria de acuerdo a lo que el usuario indique que sea el tamaño del arreglo, se tiene que especificar
	de que tipo serán los datos que se reserven
	*/
	arreglo = (int *)malloc (num * sizeof(int));
	if (arreglo!=NULL) {
		/*Mientras tenga datos almacenados se imprime el contenido del arreglo separados por una tabulacion
		ademas de estar encerrado en corchetes*/
		printf("Vector reservado:\n\t["); 
		for (cont=0 ; cont<num ; cont++){
			printf("\t%d",*(arreglo+cont));
		}
		printf("\t]\n");
		printf("Se libera el espacio reservado.\n");
		//El comando free libera la memoria reservada para permitir que otro programa pueda usarla
		free(arreglo);
	}
	return 0;
}
 
