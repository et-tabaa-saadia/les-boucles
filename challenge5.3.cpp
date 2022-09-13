#include<stdio.h>
#include<stdlib.H>
int main(){
	int nombre,nbrinverse=0;
	printf("entrer le nombre : ");
	scanf("%d",&nombre);
	
	
	while(nombre!=0)
	{
	
	nbrinverse=(nbrinverse*10)+(nombre%10);
	
	nombre=nombre/10;}
	printf(" n : %d",nbrinverse);
	
}

