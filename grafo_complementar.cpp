#include "redutor.h"

int grafo_complementar() {
	cout<< "" <<endl; 
	cout<<"==>>Complement Graph Algorithm<<=="<<endl; 
	FILE *fin_graph, *fout_complemento;
	int c;
	fin_graph = fopen(FILE_IN_GRAPH, "r");
	fout_complemento = fopen(FILE_OUT_COMPLEMENTO, "w");
	if (fin_graph == NULL) {
		printf("Erro na leitura do grafo de entrada!\n");
		return 0;
	}
	while ((c = fgetc(fin_graph)) != EOF) {
		if (c == '0'){
			fprintf(fout_complemento, "1");
			printf("1");
		}
		else if (c == '1'){
			fprintf(fout_complemento, "0");
			printf("0");
		}
		else{
			fprintf(fout_complemento, "%c", c);
			printf("%c", c);
		}
	}
	fclose(fin_graph);
	fclose(fout_complemento);

	cout<< "" <<endl; 
	return 0;
}
