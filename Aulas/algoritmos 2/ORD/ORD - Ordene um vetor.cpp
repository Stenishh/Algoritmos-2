#include <iostream>
#include <cmath>
using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}

int main()
{
    int vetor[100];
    int i = 0;
    int j = 0;
    int tamanho;
    int x;
    
    cin >> x;
    
    do
    {
        vetor[j] = x;
        j++;
        cin >> x;
    }
    while(x != -1);
    
    tamanho = j;
    
    quickSort(vetor, tamanho, 0, tamanho-1);
    
    for(i = 0; i < tamanho; i++)
      cout << vetor[i] << " ";
    
    
    
    return 0;
}