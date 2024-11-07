#include <iostream>
using namespace std;

struct dado
{
	int k;
	int status;
};


int hash_aux(int k, int m)
{
	int h;

	h = k % m;
	if(h<0)
		h += m;

	return h;
}


int hash1(int k, int i, int m)
{
	int h;

	h = hash_aux(k, m);
	h = (h + i) % m;

	return h;
}

int hash_insert(dado t[], int m, int k)
{
	int j;
	int i;

	i = 0;
	do
	{
		j = hash1(k, i, m);

		if (t[j].status != 1)
		{
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else
			i = i + 1;
	}
	while (i != m);
	return -1;
}

int hash_search(dado t[], int m, int k)
{
	int i;
	int j;

	i = 0;
	do
	{
		j = hash1(k, i, m);
		if (t[j].k == k)
		{
			return j;
		}
		i = i + 1;
	}
	while (t[j].status != 0 && i < m);
	return -1;


}

int main()
{
	int m;
	int k;
	int i = 0;
	struct dado t[100];
	int p;

	cin >> m;

	cin >> k;

	while(k != 0)
	{
		hash_insert(t, m, k);
		cin >> k;
	}

	cin >> k;
	p = hash_search(t, m, k);

	if(p == -1 )
	{
		cout << " Chave " << k << " nao encontrada" << endl;
	}

	else
		cout << " Chave " << k << " encontrada na posicao " << p << endl;
	

	return 0;
}

