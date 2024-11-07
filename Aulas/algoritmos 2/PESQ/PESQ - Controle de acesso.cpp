#include <iostream>
using namespace std;

int main()
{
    int vetor[30];
    int X;
    int i = 0;
    bool acesso = false;
    int tamanho;
    
    cin >> vetor[i];
    
    while(vetor[i] != -1)
    {
        i++;
        cin >> vetor[i];
    }
    
    cin >> X;
    
    tamanho = i;
    
    for(i = 0; i < tamanho; i++)
    {
        if(vetor[i] == X)
            acesso = true;
        else
         acesso = false;
    }
    
    if(acesso == true)
    cout << "Possui acesso" << endl;
    
    else
    cout << "Nao possui acesso" << endl;
    
    return 0;
}