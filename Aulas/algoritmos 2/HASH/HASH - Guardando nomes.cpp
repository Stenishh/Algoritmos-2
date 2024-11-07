#include <iostream>
#include <cstring>
using namespace std;

struct dado
{
    char info[50]; // informacao
    int k; // chave
    int status; // 0: vazio, 1:ocupado, 2:removido
};

int calcula_chave(char k[])
{
    int chave = 0;
    int len = strlen(k);
    for (int i = 0; i < len; i++)
    {
        chave += k[i];
    }
    return chave;
}

int h1(int k, int m)
{
    int h;
    h = k % m;
    if (h < 0)
    {
        h += m;
    }
    return h;
}

int h2(int k, int m)
{
    int h;
    h = 1 + (k % (m - 1));
    if (h < 0)
    {
        h += m;
    }
    return h;
}

int dhash(int k, int m, int i)
{
    int h;
    h = (h1(k, m) + (i * h2(k, m))) % m;
    return h;
}

int hash_insert(dado t[], int m, char k[])
{
    int chave = calcula_chave(k);
    int j;
    int i;

    i = 0;
    do
    {
        j = dhash(chave, m, i);
        if (t[j].status != 1)
        {
            strcpy(t[j].info, k);
            t[j].k = chave;
            t[j].status = 1;
            return j;
        }
        else
        {
            i++;
        }
    } while (i != m);

    return -1;
}

int hash_search(dado t[], int m, char k[])
{
    int chave = calcula_chave(k);
    int i = 0;
    int j;
    do
    {
        j = dhash(chave, m, i);
        if (t[j].status == 0)
        {
            return -1;
        }
        else if (t[j].status == 1 && strcmp(t[j].info, k) == 0)
        {
            return j;
        }
        i++;
    } while (i < m);

    return -1;
}

int hash_remove(dado t[], int m, char k[])
{
    int chave = calcula_chave(k);
    int j = hash_search(t, m, k);
    if (j != -1)
    {
        t[j].status = 2;
        return 0; // conseguiu remover
    }
    else
    {
        return -1; // str nao esta na tabela
    }
}

int main()
{
    struct dado t[100];
    char k[50];
    int m;
    int i;
    int opcao = 0;
    int p;
    int j;
    int posi;

    cin >> m;

    for (i = 0; i < m; i++)
    {
        t[i].k = -1;
        t[i].status = 0;
    }

    while(opcao != 5)
	{
	cin >> opcao;


	if(opcao == 1)
	{
        cin.ignore();
		cin.getline(k,50);

		hash_insert(t, m, k);
	}


	if(opcao == 2)
	{
        cin.ignore();
        cin.getline(k,50);

        p = hash_search(t, m, k);

        if(p == -1) {
            cout << k <<" nao encontrado " << endl;
        } else {
            cout << k << " encontrado na posicao: " << p << endl;
        }
	}

	if(opcao == 3)
	{
        cin.ignore();
        cin.getline(k,50);

        hash_remove(t, m, k);

	}

	if(opcao == 4)
	{
		for(i = 0; i < m; i++)
        {
            if(t[i].status == 1)
            {
                cout << t[i].info << endl;
            }
        }
	}

	}
	return 0;

}