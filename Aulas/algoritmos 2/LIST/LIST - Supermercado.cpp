#include <iostream>
#include <list>
using namespace std;



int main()
{
	list<int> lista1; // "ponteiro" para a lista
	list<int> lista2; // "ponteiro" para a lista
	list<int>::iterator p; // "ponteiro" para varrer a lista
	int x; // var aux p/ leitura dos dados
    int m;
    int i;
	int e; 
	int N;
	 	
	cin >> N;
	
	for(i = 0; i < N; i++)
	{
	    cin >> m;
	    
	    if(m == 1)
	    {
	     cin >> x; 
	     lista1.push_back(x);
	    }
	    
	    if(m == 2)
	    {
	        e = *lista1.begin();
	        lista2.push_front(e);
	        lista1.pop_front();
	    }
	}
	    cout << "Estoque: ";
	    while(!lista1.empty())
	    {
	        x = *lista1.begin();
	        cout << x << endl;
	        lista1.pop_front();
	        
	    }
	           
	           
	     cout << endl << "Venda: ";
	     while(!lista2.empty())
	     {
	         x = *lista2.begin();
	         cout << x << " ";
	         lista2.pop_front();
	         
	     }
	     return 0;
	}
	
	
	
	
	
	
		

	
