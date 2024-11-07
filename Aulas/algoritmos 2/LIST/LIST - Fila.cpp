#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> fila;
    int i;
    int x;
    
    for(i=0;i<4;i++)
    {
        cin >> x;
        fila.push_back(x);
    }
    
    while(!fila.empty())
    {
        x = *fila.begin();
        cout << x << " ";
        fila.pop_front();
    }
     return 0;   
        
    }
    
