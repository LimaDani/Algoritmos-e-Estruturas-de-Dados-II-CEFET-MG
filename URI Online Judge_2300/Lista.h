/*--------------------------------------------------------------------------
*	CENTRO FEDERAL DE EDUCACAO TECNOLOGICA DE MINAS GERAIS
*	LABORATORIO DE ALGORITMOS E ESTRUTURAS DE DADOS II
*	PROBLEMA: DISTRIBUIÇÃO DE ENERGIA - URI Online Judge | 2300
*   BIBLIOTECA - LISTA DE ADJACENCIA 
*--------------------------------------------------------------------------*/


/*
** PROCEDIMENTO: inicializaVetores
** Inicializa com valor zero os Vetores 'lista[]' e 'visitado[]' 
*/
void inicializaVetores();

/*
** PROCEDIMENTO: inicializaLista
** Inicializa a Lista de adjacencia
*/
void inicializaLista();

/*
** FUNCAO: DFS 
** Realiza uma Busca em Profundidade atravez de recurssao
*/
void DFS(int);

/*
** PROCEDIMENTO: exibeResult
** Exibe o resultado da analise do caso de teste:
** - Normal -> Grafo conexo
** - Falha  
*/
void exibeResult(int);

