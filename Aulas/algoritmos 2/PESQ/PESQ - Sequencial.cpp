#include <iostream>
using namespace std;

int sequencial(int vetor[],int tamanho, int x)
{
    bool achou = false;
    int i = 0;
    while (achou==false && i < tamanho)
    
       achou = vetor[i++] ==x;
        if(achou)
            return (i - 1);
        else return -1;
    
}

int main()
{

    int i = 0;
    int vetor[100];
    int x;
    int tamanho;
    int pesq ;


    cin >> vetor[i];

    while(vetor[i] != -1)
    {
        i++;
        cin >> vetor[i];
    }

    cin >> x;
    tamanho = i;

    pesq = sequencial(vetor,tamanho,x);

    if(pesq != -1)
    {
        cout << x << " encontrado na posicao " << pesq << endl;
    }
    else
        cout << x << "nao encontrado" << endl;





    return 0;
}
