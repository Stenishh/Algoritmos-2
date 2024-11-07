#include <iostream>
#include <list>
using namespace std;

struct no
{
    int v; // vertice adjacente
    int p; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
    no aux;
    
    aux.v = v;
	aux.p = p;
	adj[u].push_back(aux);
	// Inserindo aresta da volta
	if(orientado == 0)
	{
	aux.v = u;
	adj[v].push_back(aux);
	}
	
    
}

int main()
{
    int orientado;
    int nVertices;
    int u;
    int v;
    int p;
    int i; // contador
	list<no>::iterator q; // iterador p/ varrer as listas
	list<no> adj[10]; // lista de adjacencia
	
    cin >> nVertices;
    cin >> orientado;
    
        cin >> u;
        cin >> v;
        cin >> p;
    
    while(u != -1 && v != -1 && p != -1)
    {
        
    cria_aresta(adj, u, v, p, orientado);
        cin >> u;
        cin >> v;
        cin >> p;
    }
    
    
    
    for(i = 0; i < nVertices;i++)
		for(q=adj[i].begin(); q != adj[i].end(); q++)
			cout << i << " " << q->v << " " << q->p << endl;
			
    return 0;
}