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


int hash1(int k, int i, int m)
{
	int h;

	h = hash_aux(k, m);
	h = (h + i) % m;
	
	return h;
}

int main()
{
    int k;
    int m;
    int i;
    
    
    cin >> k;
    cin >> m;
    
    
    for(i = 0; i < m; i++)
    {
     cout << hash1(k,i,m) << " ";
    }
    cout << endl;
    
}