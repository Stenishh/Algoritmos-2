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



int main()
{
    int k;
    int m;
    
    cin >> k;
    cin >> m;
    
    while(k != 0 && m != 0)
    {
      cout << hash_aux(k,m) << endl;
      
      cin >> k;
      cin >> m;
     
        
    }
    
    
    
    
    return 0;
}