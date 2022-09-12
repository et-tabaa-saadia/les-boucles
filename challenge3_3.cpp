#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,m,n=0;
	printf("entrer le nombre : ");
	 scanf("%d",&m);
	 
	 for(i=1;i<=m;i++){
	 	if(m%i==0)
	 	n++;}
	 	
	 	
	 	if(n==2){
		 
	 	printf("premier");}
	 	else 
	 	printf("pas premier");
	 
}
	 

