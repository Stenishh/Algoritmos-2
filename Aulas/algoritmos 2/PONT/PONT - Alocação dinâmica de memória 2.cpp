#include <iostream>
#include <iomanip>
using namespace std;

struct dado
{
	int notas;
	float media;
	
};


int main()
{
	dado *v;
	int i;
	int soma = 0;
	int N;
	
    v = new dado[4];
    
    
    cin >> N;    
    
    for(i = 0; i < N*4; i ++)
    {
        cin >> v[i].notas;
    }


    for(i = 0; i < N*4; i ++)
    {
        soma = soma + v[i].notas;
        
    }
    
    v->media = (float)soma/(N*4);
    

    cout << fixed << setprecision(2) << v->media << endl;
    
	
	delete [] v;
	
	return 0;
}