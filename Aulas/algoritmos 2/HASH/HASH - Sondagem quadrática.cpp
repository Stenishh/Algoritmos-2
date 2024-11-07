#include <iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int h;
    
    while(k < 0)
	{
		k = k + m;
	}
    
    h = k % m;
    
    return h;
}


int hash2(int k, int i, int m, int c1, int c2)
{
	int h;

	h = hash_aux(k, m);
	h = (h + c1*i + c2*i*i) % m;
	
	return h;
}

int main()
{
    int k;
    int m;
    int i;
    int c1;
    int c2;
    
    
    cin >> k;
    cin >> m;
    cin >> c1;
    cin >> c2;
    
    for(i = 0; i < m; i++)
    {
     cout << hash2(k,i,m,c1,c2) << " ";
    }
    cout << endl;
    
}
