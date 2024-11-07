#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x)
{
	list<int>::iterator p; // "ponteiro" para varrer a lista
    
    
    for(p = lista.begin(); p != lista.end(); p++)
    {
        if(x == *p)
         return true;
         
        else
         return false;
    }
    
    
    
}

int main()
{
	list<int> lista; // "ponteiro" para a lista
	list<int>::iterator p; // "ponteiro" para varrer a lista
	int x; // var aux p/ leitura dos dados
    int N;
    bool achou;
	 	
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}

	cin >> N;

    achou = encontrar(lista,N);
    
	if(achou ==  true)
	 cout << "Encontrado" << endl;
	 
	else
	 cout << "Nao encontrado" << endl;
	
	while(!lista.empty())
		lista.pop_front();
	
	
	return 0;
}