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
	if(h < 0)
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
int hash_remove(dado t[], int m, int k)
{
	int j;

	j = hash_search(t, m, k);
	if(j != -1)
	{
		t[j].status = 2;
		t[j].k = -1;
		return 0; // consegui remover
	}
	else

		return -1; // k nao esta na tabela
}

int main()
{
	int k;
	int m;
	int i = 0;
	int p;
	struct dado t[100];

	cin >> m;

	for(i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}

	cin >> k;

	while(k != 0)
	{
		hash_insert(t, m, k);
		cin >> k;
	}

	cin >> k;
	hash_remove(t, m, k);


	for(i = 0; i < m; i++)
	{
		cout << t[i].k << " ";

	}
	cout << endl;


	return 0;
}