//leone duarte de oliveira

#include"merge.h"

main() {
	
	int tamanho_vetor=0,contador=0,*vetor;


	double tempo_gasto;

	
	printf("\nMERGE SORT\ninsira a quantidade de itens no  vetor:");
	scanf("%d",&tamanho_vetor);

	
 	vetor = (int *) malloc(sizeof(int) * (tamanho_vetor));
 	
	srand(time(NULL));
	
	for(contador = 0; contador < tamanho_vetor; contador++){		
		vetor[contador] = rand();
		
	}
	

	printf("\n\nexibindo vetor");
    exibir(vetor,tamanho_vetor);
    
 	
 	
	printf("\n\norganizando vetor");
	mergeSort(vetor,0,tamanho_vetor-1);


 
   printf("\nTEMPO GASTO PARA ORGANIZAR O VETOR: %lf s\n", tempo_gasto);
	printf("\n\nexibindo vetor organizado");
	exibir(vetor,tamanho_vetor);
	
}
