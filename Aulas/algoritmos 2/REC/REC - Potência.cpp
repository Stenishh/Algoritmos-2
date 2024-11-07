#include <iostream>
using namespace std;

int pot(int a, int n)
{
    if(n == 0)
      return 1;
    else
      return a*pot(a,n-1);
}



int main()
{
    int a;
    int n;
    int p;
    
    cin >> a;
    cin >> n;
    
    p = pot(a,n);
    
    cout << p << endl;
    
    return 0;

}