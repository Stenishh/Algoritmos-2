#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double raiz(double x, double xo, double e)
{
    if(abs(xo*xo-x) <= e)
      return xo;
      
    else
      return raiz(x,(xo*xo+x)/(2*xo),e);
    
    
    
}

int main()
{
    double x;
    double xo;
    double e;
    double r;
    
    cin >> x;
    cin >> xo;
    cin >> e;
    
    r = raiz(x, xo, e);
    
    
    cout << fixed << setprecision(4) << r << endl;
    
    
    return 0;
}