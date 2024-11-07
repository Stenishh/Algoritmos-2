#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista)
{

    list<int>::iterator p; // "ponteiro" para varrer a lista
    int Soma = 0;
    
    for(p = lista.begin(); p != lista.end(); p++)
	   Soma += *p;
	
	return Soma;	
}

int main()
{
	list<int> lista; // "ponteiro" para a lista
	list<int>::iterator p; // "ponteiro" para varrer a lista
	int x; // var aux p/ leitura dos dados
  
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}
	
	cout << "soma = " << soma(lista) << endl;
		
	
	while(!lista.empty())
		lista.pop_front();
	
	
	return 0;
}