/* --------------------------------------------------------------------------
*	CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
*	LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II
*	PROBLEMA: DISTRIBUIÇÃO DE ENERGIA - URI Online Judge | 2300
*   MATRIZ DE ADJACENCIA 
*----------------------------------------------------------------------------
*	# E = quantidade de estacoes = total de vertices
*	(3 <= E <= 100)
*	# L = quantidade de arestas por vertice = total de linhas as serem lidas
*	(E-1 < L < E(E-1)/2)
*---------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#define MAX 101
 
int pilha[MAX];
int topo;
int adj[MAX][MAX];
int aux[MAX];
int visitado[MAX];

int E, L, X, Y;

void inicializaVetor()
{
	for(int i=1; i<=E; i++)
	{
   		aux[i] = 0;
   		visitado[i]=0;
  	}
}

void inicializaMatriz()
{
	for(int i=1;i<=L;i++)
	{
   		cin >> X >> Y;
		/* Trecho necessario ja que o grafo nao e direcionado */
   		adj[X][aux[X]++]=Y;
   		adj[Y][aux[Y]++]=X;
  	}
}

void inicializa()
{
	topo = 0;
}
 
void push(int x)
{
	pilha[topo++] = x;
}
 
int pop()
{
	return pilha[--topo];
}
 
int vazia()
{
	return topo==0;
}
 
int main()
{
	int u,v,cont,teste=1;
  	while(true)
	{
  		cin >> E >> L;
		/* Condicao de parada */ 
   		if(E==0 && L==0) 	
			break;
		/* Inicializacao dos vetores "visitado[]" e "aux[]" */
		inicializaVetor();
		/*Preenchendo a matriz de adjacencia "adj[][]"*/
		inicializaMatriz();
		/* Inicializa a pilha */
  		inicializa();
  		visitado[1]=1;
  		push(1);
  		cont = 0;
		
        /*	Algoritmo de uma Busca em Profundidade adaptada  
			Enquanto a pilha nao for vazia
				desempilhar v
				Se v ainda nao foi visitado
					visita v, marca v como 'visitado' */
				
  		while(!vazia())
		{
   			u = pop();
   			cont++;
   			for(int i=0;i<aux[u];i++)
			{
    			v = adj[u][i];
    			if(visitado[v] == 0)
				{
     				visitado[v] = 1;
     				push(v);
    			}
   	        }
        }
   
        cout << "Teste " << teste++ << endl;
   		if(cont==E)
    		cout << "normal" << endl;
   		else
        	cout << "falha" << endl;
        cout << endl;
 	}
    return 0;  
}
