/*----------------------------------------------------------
*	CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
*	LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II
*   TRABALHO PRATICO III  
*   1.1 CONJUNTOS DISJUNTOS: UNION FIND  
*-----------------------------------------------------------*/
#ifndef UNIONFIND_H
#define UNIONFIND_H

#include<bits/stdc++.h>
#include <iostream>
 
using namespace std;
                
vector < pair <int,pair<int,int> > > G; // peso; u,v ; u,v representacao das arestas e do grafo atraves de um vetor
int m,n; 
/*  n - quantidade de vertices
	m - quantidade de arestas 
*/
class UnionFind{
    public: 
        void makeSet();
        //Operação da Uniao: junta Conjunto contendo u ao conjunto contendo v; usando heurística "UNION-BY-RANK"
        void Union(int u,int v);
        void print(); 
        int  pai[1000],rank[1000]; // Pai[] (para armazenar raiz / elemento representativo de um conjunto ao encontrar a união
    private: 
        //Retorna o pai do vertice u; usando heuristica "PATH COMPRESSION"
        int findSet(int u); 
};
#endif



