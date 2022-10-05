#include <stdio.h>

int main(){

	int N;	
	scanf("%d",&N);
	int X[N];
	int i,menor,posi;

	scanf("%d",&X[0]);
	menor=X[0];
	posi=0;


	for(i=1;i<N;i++){
		scanf("%d",&X[i]);
		if (X[i]<menor){
			menor=X[i];
			posi=i;
		}
	}
			
			
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",posi);

	return 0;	

}