#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int *v = NULL; // ponteiro para o vetor
	int N; // tamanho desejado para o vetor
	int i; // contador

	
	cin >> N; // lendo tamanho desejado para o vetor
	v = new int[N]; // alocando memoria para o vetor

	// Lendo elementos do vetor
	for(i = 0; i < N; i ++)
		cin >> v[i];
	
	// Mostrando o vetor
	for(i = 0; i < N; i ++)
		cout << v[i] << " ";
		
	cout << endl;	
		
		
	delete [] v; // liberando a memoria alocada


	return 0;
}
