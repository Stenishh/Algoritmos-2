#include <iostream>

using namespace std;

struct dado
{
	int k;
	int status;
};

int h1(int k, int m)
{

	int h;

	h = k % m;
	if(h < 0)
		h += m;

	return h;

}

int h2(int k, int m)
{
	int h;

	h = 1 + (k % (m - 1));
	if(h < 0)
		h += m;

	return h;

}

int dhash(int k, int m, int i)
{
	int h;

	h = (h1(k, m) + ( i * h2(k, m))) % m;

	return h;

}

int hash_insert(dado t[], int m, int k)
{
	int j;
	int i;

	i = 0;
	do
	{
		j = dhash(k, m, i);

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
		j = dhash(k, m, i);
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
    struct dado t[100];
	int k;
	int m;
	int i;
	int opc;
	int aux;
	int j;

	cin >> m;
	
		for(i = 0; i < m; i++)
	{
		t[i].k = -1;
		t[i].status = 0;
	}
	
	while(opc != 5)
	{
	cin >> opc;


	if(opc == 1)
	{

		cin >> k;
		hash_insert(t, m, k);
	}


	if(opc == 2)
	{
		cin >> k;
		aux = hash_search(t, m, k);

		if(aux == -1 )
		{
			cout << "-1" << endl;
		}

		else
			cout << aux << endl;


	}

	if(opc == 3)
	{
		cin >> k;
		hash_remove(t, m, k);
	}

	if(opc == 4)
	{
		for(i = 0; i < m; i++)
		{
			cout << t[i].k << " ";
		}

		cout << endl;
	}

	}
	return 0;

}