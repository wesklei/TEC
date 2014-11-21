#!/bin/sh

CC=g++

SRCDIR = ./src-clstr

algorithm: 
	$(CC)  *.cpp -o redutor 

clean:
	rm redutor cliques.out graph_complemento.out conjunto_independente.out

