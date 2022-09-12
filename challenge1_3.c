# include<stdio.h>
# include<stdlib.h>
int main(){

	int M ,i ,multi;
	
	printf("entrer le nombre : ");
	scanf("%d",&M);
	for (i=1;i<=10;i++){
	multi =M*i;

	printf("%d x %d = %d\n" ,M ,i ,multi);
	}
}
