#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,l,r;
	printf("entree le nombre des lignes : ");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(r=1;r<=l-i;r++){
			printf(" ");
		
		}
		for(r=1;r<=(i*2)-1;r++)
		{
			printf("*");
		}
		printf("\n");
		
	}

}
