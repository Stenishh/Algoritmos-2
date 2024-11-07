#include <iostream>
using namespace std;

int main()
{
	int *v = NULL; // ponteiro para o vetor
	int N; // tamanho desejado para o vetor
	int i; // contador
    int maior = -99999;



	cin >> N; // lendo tamanho desejado para o vetor
	v = new int[N]; // alocando memoria para o vetor

	// Lendo elementos do vetor
	for(i = 0; i < N; i ++)
		cin >> v[i]; 
	
	for(i = 0; i < N; i ++)
	{
	    if(maior < v[i])
	    {
	      maior = v[i];
	    }
	}
	
	
		cout << maior << endl;
	delete [] v; // liberando a memoria alocada


	return 0;
}
