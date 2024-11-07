#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho, int &contador, int trab[])
{
	int i, j; // contadores
	bool troca;
	int limite;
	int m = 0;
	troca = true;
	limite = tamanho - 1;
    contador = 0;
	while (troca)
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab[m] = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab[m];
				j = i;
				troca = true;
				contador++;
				m++;
			}
		limite = j;
	}
}

int main()
{
    int N;
    int vetor[100];
    int i;
    int j = 0;
    int contador = 0;
    int trab[100];
    
    cin >> N;
    
    for(i = 0; i < N; i++)
    {
        cin >> vetor[i];
        j++;
    }
    
    bubbleSort(vetor,j,contador,trab); 
    
    for(i = 0; i < contador; i++)
    {
	            cout << "New trab: "  << trab[i] << endl;
    }
    
    cout << "Contador: " << contador << endl;
    
    return 0;
}