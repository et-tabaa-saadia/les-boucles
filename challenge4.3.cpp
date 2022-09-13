#include <stdio.h>
#include <stdlib.h>
int main (){
	int i,n,s=0,m=0;
	
	for (i=1;i<=5;i++){
	
	printf ("entrer le nombre : ");
	scanf("%d",&n);
	
	if(n%10==0 && n<100){
		s=s+n;
		
	}
	if(n>m )
	m=n;
	}
	printf("somme : %d\n",s);
	printf("max : %d", m);
}
