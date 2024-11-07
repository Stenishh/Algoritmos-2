#include <iostream>
using namespace std;

int main()
{
	int *p = NULL;// ponteiro para o vetor
    int *v = NULL; // ponteiro auxiliar
	int tam; // tamanho desejado para o vetor
	int i; // contador
    int par = 0;


    cin >> tam; // lendo tamanho desejado para o vetor

	v = new int[tam]; // alocando memoria para o vetor

    p = v;

	// Lendo elementos do vetor
	for(i = 0; i < tam; i ++)
    {
        cin >> *p;
        p++;

    }
	
	// Mostrando o vetor
	for(i = 0; i < tam; i ++)
	{
		if(v[i]%2 == 0 && v[i] > 0)
        {
            par++;
        }
	}
	
	cout << par << endl; // mostrando a quantidade de vetores que sao pares


	delete [] v; // liberando a memoria alocada


	return 0;
}
