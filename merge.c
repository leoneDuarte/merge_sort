//leone duarte de oliveira
#include"merge.h"
void exibir(int *vetor,int tamanho_vetor){
	int conta=0;
	
	while(conta < tamanho_vetor){
		printf("\nnumero %d: %d",conta,vetor[conta]);
		conta++;
	}
	
	printf("\n\n");
} 

//ordenando vetor
void mergeSort( int *vetor, int posicao_inicial, int posicao_final ) {
	 
   int i,    j,  metade,   *vetor_temporario, contador;
   
   if (posicao_inicial != posicao_final ){
   
	//DIVIDINDO O VETORES PELA METADE	
   metade = ( posicao_inicial + posicao_final )/2;
   mergeSort(vetor, posicao_inicial, metade );//COMEÇO ATE METADE
   mergeSort( vetor, metade+1,posicao_final);//METADE AO FINAL

	
   i = posicao_inicial;
   j = metade+1;
   contador = 0;
   
   //CRIANDO UM VETOR TEMPORARIO PARA RECEBER OS VETORES REPARTIDOS
   vetor_temporario = (int *) malloc(sizeof(int) * (posicao_final-posicao_inicial+1));
  
   
   //ENQUANTO NAO TERMINAR DE VERIFICAS OS DOIS LADOS DO VETOR
   while( i < metade+1 || j < posicao_final+1 ){ 
  	 
  	// SE I FOR JA ESTIVER CHEGADO NA METADE PASSAREMOS A OUTRA PARTE DO VETOR DESORDENADO PARA O VETOR TEMPORÁRIO
       if ( i == metade+1 ){ 
         vetor_temporario[contador] = vetor[j];
         j++;
         contador++;
         
       } 
      // SE J FOR JA ESTIVER CHEGADO NO FINAL PASSAREMOS A OUTRA PARTE DO VETOR DESORDENADO PARA O VETOR TEMPORÁRIO
      	else if ( j == posicao_final+1 ){ 
           
            vetor_temporario[contador] = vetor[i];
            i++;
            contador++;
         } 
    
        else if (vetor[i] < vetor[j]){
		  	
               vetor_temporario[contador] = vetor[i];
               
               i++;
               contador++;
            }
			
			 
        else{
			vetor_temporario[contador] = vetor[j];		  	
			j++;
			contador++;
	           
      	}
    }
     	
	//REMONTANDO O VETOR
	for( i = posicao_inicial; i <= posicao_final; i++ )   {
		
	      vetor[i] = vetor_temporario[i-posicao_inicial];
	}
	   free(vetor_temporario);
	}
}


///INSERTION SORT//////////////////////////

void insertion(int *vetor, int tamanho_vetor){
	
	int contador=0,  troca=0,  guarda_memoria,  guarda_memoria2,  giros=0;

	
	while(contador < tamanho_vetor){//while uque percorre todo o vetor começando do começo e indo ate o final
		
				
			if (vetor[contador] > vetor[contador+1]){//realizando a troca
								
				guarda_memoria  =  vetor[contador + 1];
							
				vetor[contador+1] = vetor[contador];
				
				vetor[contador] = guarda_memoria;
				
				giros = contador;
				
				while(giros > 0){//while que pega a posiçao do meno e retorna ao começo
					
					if(vetor[giros] < vetor [giros-1]){//realizando a troca
						
						guarda_memoria2 = vetor[giros-1];
						
						vetor[giros-1] = vetor[giros];
						
						vetor[giros] = guarda_memoria2;
						
					}
				
				giros--;
									
				}
		}
		
		contador++;
	}
		
}

////BUBLE SORT///


void bubble(int *vetor, int tamanho_vetor){
	
	int contador=0, contador2=0, troca=0, guarda_memoria,giros;

	
	while(contador < tamanho_vetor){//gira por todo o vetor
		contador2=0;
		while(contador2 < tamanho_vetor && contador2+1 < tamanho_vetor){//gira enquanto houver trocas
		
			if (vetor[contador2] > vetor[contador2+1]){
				
				
				guarda_memoria  =  vetor[contador2 + 1];
							
				vetor[contador2+1] = vetor[contador2];
				
				vetor[contador2] = guarda_memoria;			
				
						
			}
			
			contador2++;
		}
		contador++;

	}
		
}



