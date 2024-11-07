#include <iostream>

using namespace std;

int h1(int k, int m)
{
    
	int h;

	h = k % m;
	if(h<0)
		h += m;

	return h;
    
}

int h2(int k, int m)
{
    int h;

	h = 1 + (k % (m-1));
	if(h<0)
		h += m;

	return h;
    
    
    
}

int dhash(int k, int m, int i)
{
    int h;
    
    h = (h1(k, m) + ( i * h2(k, m))) % m;
    
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
        cout << dhash(k, m , i) << " ";
    }
    cout << endl;
    
    
    return 0;
    
}