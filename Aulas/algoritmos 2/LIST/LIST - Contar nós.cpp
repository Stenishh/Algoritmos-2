#include <iostream>
#include <list>
using namespace std;

int contar(list<int> lista)
{
    
    int cont = 0;
	list<int>::iterator p; // "ponteiro" para varrer a lista
    
    for(p = lista.begin(); p != lista.end(); p++)
    {
        cont++;
    }
    
    return cont;
}


int main()
{
	list<int> lista; // "ponteiro" para a lista
	list<int>::iterator p; // "ponteiro" para varrer a lista
	int x; // var aux p/ leitura dos dados
    int contador;
	 
	 	
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}
	
	
    contador = contar(lista);
		
		
	cout << contador << endl;	
	
	while(!lista.empty())
		lista.pop_front();
	
	
	return 0;
}