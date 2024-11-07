#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
	int i, j;
	int chave;

	for(j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while(i >= 0  && vetor[i]  < chave)
		{
			vetor[1 + i] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}

}
int main()
{
	int i = 0;
	int vetor[100];


	cin >> vetor[i];

	while(vetor[i] != 0)
	{
		i++;
		cin >> vetor[i];
	};


	insercaoDireta(vetor, i);

	for(int j = 0; j < i; j++)
	{
		cout << vetor[j];
		if (j != i - 1)
		{
			cout << " ";
		}

	}
		return 0;
	}
