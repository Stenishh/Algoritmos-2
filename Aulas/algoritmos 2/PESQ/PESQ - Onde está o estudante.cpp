#include <iostream>
using namespace std;
int main()
{
    int matricula[100];
    int N;
    int X;
    int i;
    int achou = 0;
    int local;
    
    cin >> N;
    
    for(i=0;i < N;i++)
    {
        
        cin >> matricula[i];
    
    }
    
    
    cin >> X;
    
      for(i=0;i < N;i++)
    {
       if(X == matricula[i])
       {
           achou++;
           local = i;
       }
        
    }
    
    if(achou == 0)
    cout << "Nao localizado" << endl;
    
    else
    cout << "Corredor " << local << endl;
}