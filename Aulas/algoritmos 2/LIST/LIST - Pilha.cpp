#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> pilha;
    int i;
    int x;
    
    for(i=0;i<4;i++)
    {
        cin >> x;
        pilha.push_front(x);
    }
    
    while(!pilha.empty())
    {
        x = *pilha.begin();
        cout << x << " ";
        pilha.pop_front();
    }
     return 0;   
        
    }