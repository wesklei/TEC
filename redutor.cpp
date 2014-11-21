#include "redutor.h"

int main(){

	//Algoritmo de reducao
	//Clique para Conjunto independente
	
	//Entrada:	G (Grafo)
	//		K (|V|)
	
	//G' <= Complemento de G
	//retorna o clique do complmeneto de G: return Clique(G',k) 

	//apenas para exibir no console
	printf("\n\n==>>Reducao: Clique para Conjunto Independente\n");
	mostra_grafo();
	grafo_complementar();
	clique();
	conjunto_independente();
	printf("\n");
	return 0;
}


int mostra_grafo() {
	FILE *fin_graph;
	int c;
	fin_graph = fopen(FILE_IN_GRAPH, "r");
	printf("Grafo de entrada:\n");
	if (fin_graph == NULL) {
		printf("Erro na leitura do grafo de entrada!\n");
		return 0;
	}
	while ((c = fgetc(fin_graph)) != EOF) {
			printf("%c", c);
	}
	fclose(fin_graph);
	return 0;
}
