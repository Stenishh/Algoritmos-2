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
	
    v = new dado[4];
    
    for(i = 0; i < 4; i ++)
    {
        cin >> v[i].notas;
    }


    for(i = 0; i < 4; i ++)
    {
        soma = soma + v[i].notas;
        
    }
    
    v->media = (float)soma/4;
    

    cout << fixed << setprecision(2) << v->media << endl;
    
	
	delete [] v;
	
	return 0;
}