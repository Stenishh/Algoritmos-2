#include <iostream>
#include <list>
using namespace std;
struct no{
    int v; //destino
    int p; //peso
};
void cria_aresta(list<no> adj[], int u, int v, int p, int orientado){
    no aux; //var aux p/ inserir as arestas na lista de adjacencia
    //Inserindo aresta
    aux.v = v;
    aux.p = p;
    adj[u].push_back(aux);
    //Inserindo aresta da volta
    if(orientado == 0){
        aux.v = u;
        adj[v].push_back(aux);
    }
}
void bfs(list<no>adj[], int nVertices, int s){
    int u;
    int v;
    list<no>::iterator p;
    char state[10];
    int pai[10];
    list<int> q;
    bool conex;
    for(u = 0; u < nVertices; u++){
        if(u != s){
            state[u] = 'u'; //undiscovered
            pai[u] = -1; //sem pais
        }
    }
    state[s] = 'd'; //discovered
    pai[s] = -1;
    q.push_back(s);
    while (!q.empty())
    {
        u = *q.begin();
        q.pop_front();
        //cout << u << endl;
        for(p = adj[u].begin(); p != adj[u].end(); p++)
        {
            v = p->v;
            //cout << u << " " << v << endl;
            if(state[v] == 'u'){
                state[v] = 'd';
                pai[v] = u;
                q.push_back(v);
            }
        }
        state[u] = 'p'; //processed
    }
    for(u = 0; u < nVertices; u++){
        if(state[u] == 'u'){
            conex = false;
        }
        else{   
            conex = true;
        }
    }
    if(conex == true)
        cout << "Conexo\n";
    else
        cout << "Nao conexo\n";

}
int main(){
    list<no> adj[10]; //lista de adjacentes
    int u, v; //origem e destino da aresta
    int p = 1; //peso da aresta
    int nVertices; //Verices do grafo
    int i; //contadors
    list<no>::iterator q; //ponteiro para varrer lista
    int orientado = 0; //1:orientado, 0:nao orientado
    int s; //vertice inicial
    //Inserindo o numero de vertices e se � orientado ou n�o
    cin >> nVertices >> s;
    //Inserindo os valores de u, v e p
    cin >> u >> v;
    while (u != -1 && v != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v;
    }
    bfs(adj, nVertices, s);
    return 0;
}