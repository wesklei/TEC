
#ifndef REDUTOR_H
#define REDUTOR_H

#define FILE_IN_GRAPH "grafo.in"
#define FILE_OUT_CLIQUES "cliques.out"
#define FILE_OUT_COMPLEMENTO "graph_complemento.out"
#define FILE_OUT_CONJUNTO_INDEP "conjunto_independente.out"

#include <iostream> 
#include <fstream> 
#include <string> 
#include <vector> 

using namespace std;

//redutor
int mostra_grafo();

//conjunto_independente
bool removable(vector<int> neighbor, vector<int> cover); 
int max_removable(vector<vector<int> > neighbors, vector<int> cover); 
vector<int> procedure_1(vector<vector<int> > neighbors, vector<int> cover); 
vector<int> procedure_2(vector<vector<int> > neighbors, vector<int> cover, int k); 
int cover_size(vector<int> cover); 
int conjunto_independente();

//grafo_complementar
int grafo_complementar();

//clique
bool remove(vector<int> neighbor, vector<int> cover); 
int max_remove(vector<vector<int> > neighbors, vector<int> cover); 
vector<int> procedimento_1(vector<vector<int> > neighbors, vector<int> cover); 
vector<int> procedimento_2(vector<vector<int> > neighbors, vector<int> cover, int k); 
int size_cover(vector<int> cover); 
int clique();

#endif
