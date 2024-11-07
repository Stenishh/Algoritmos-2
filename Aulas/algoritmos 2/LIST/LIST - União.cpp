#include <iostream>
#include <list>
using namespace std;
bool encontrar(list<int> lista, int x){
    list<int>::iterator p; //ponteiro para varrer a lista
    for(p = lista.begin(); 
        p != lista.end(); p++){
        if(*p == x)
            return true;
    }
    return false;
}
int main(){
    list<int> lista1; //"ponteiro" para a lista ligada
    list<int> lista2;
    list<int> lista3;
    int x; //var aux p/ leitura de dados
    int e;
    int prev, next, i;
    int num[10];
    int tamanho;

    cin >> x;
    while(x != 0)
    {
        lista1.push_back(x);
        cin >> x;
    }

    cin >> x;
    while(x != 0)
    {
        lista2.push_back(x);
        cin >> x;
    }

    while(!lista1.empty())
    {
        e = *lista1.begin();
        lista3.push_back(e);
        lista1.pop_front();
    }

    while(!lista2.empty())
    {
        e = *lista2.begin();
        if(encontrar(lista3, e) == true)
        {
            lista2.pop_front();
        }
        else{
            lista3.push_back(e);
            lista2.pop_front();
        }
    }

    tamanho = lista3.size();

    for(i = 0; i < tamanho; i++)
    {
        num[i] = *lista3.begin();
        lista3.pop_front();
    }

    for(prev = 0; prev < tamanho - 1; prev++)
    {
        for(next = prev + 1; next < tamanho; next++)
        {
            i = num[prev];
            if(num[next] < num[prev])
            {
                num[prev] = num[next];
                num[next] = i;
            }
        }
    }
    for(i = 0; i < tamanho; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;
    return 0;
}