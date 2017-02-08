/*--------------------------------------------------------------------------
*	CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
*	LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II
*	PROBLEMA: DISTRIBUIÇÃO DE ENERGIA - URI Online Judge | 2300
*   LISTA DE ADJACENCIA - BUSCA EM PROFUNDIDADE (DFS) - RECURSAO
*---------------------------------------------------------------------------
*	# E = quantidade de estacoes = total de vertices
*	(3 <= E <= 100)
*	# L = quantidade de arestas por vertice = total de linhas as serem lidas
*	(E-1 < L < E(E-1)/2)
---------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include "Lista.h"
#define TAM 101

using namespace std;

vector <int> lista[TAM]; 
bool visitado[TAM];
int cont; /* conta o numero de visitas */
int E,L,X,Y;
 

void inicializaVetores( )
{
	for(int i=1; i<=E; i++)
	{ 
		visitado[i] = false;  /* Desmarcar todos os vertices */
		lista[i].clear();     /* Lista vazia: "clear()" inicializa a lista com 0 "*/
    }
}

void inicializaLista( )
{
	for(int i=1; i<=L; i++)
	{
		cin >> X >> Y;
		/* Como o grafo e bidirectional: marcar a conexao entre ambos os vertices ao mesmo tempo */
		lista[X].push_back(Y);
		lista[Y].push_back(X);
	}
}

void DFS(int v)
{
	vector <int>::iterator i; 
	cont++;
	for(i = lista[v].begin(); i!=lista[v].end(); i++)
	{
		if(!visitado[*i])
		{
			/* marcar "visitado[i] = true" significa que o vetor foi visitado */
			visitado[*i] = true;
			DFS(*i);
		}
	}  
}

void exibeResult(int teste)
{
		
	cout << "Teste " << teste++ << endl;
	if(cont==E)
		cout << "normal" << endl;
	else
		cout << "falha" << endl;
	cout << endl;
	teste++;
}


int main()
{
	int teste = 1;
	while(true){
		cin >> E >> L; 
		/* Condicao de parada */
		if(E==0 && L==0) 
			break;
		/* Inicializacao dos Vetores */
        inicializaVetores( );
        /* Inicializacao da lista de adjacencia */
		inicializaLista( );
		visitado[1] = true;
		cont = 0;
		/* Funcao de Busca em Profundidade */
		DFS(1);
		/* Exibe resultados */
		exibeResult(teste);
		teste++;
	}
}
