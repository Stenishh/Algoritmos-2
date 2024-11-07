#include <iostream>
#include <list>
using namespace std;
int main()
{
    
    list<int> lista_in;
    list<int> lista_out;
    int n;
    int x;
    int y;
    int e;
    
    cin >> n;
    while(n != -1)
    {
        lista_in.push_back(n);
        cin >> n;
    }
    cin >> x >> y;
    
    while (!lista_in.empty())
    {
        e = *lista_in.begin();
        if(e == x)
        {
            lista_out.push_back(y);
        }
        lista_out.push_back(e);
        lista_in.pop_front();
    }
    while(!lista_out.empty())
    {
        n = lista_out.back();
        cout << n << " ";
        lista_out.pop_back();
    }
    return 0;
}