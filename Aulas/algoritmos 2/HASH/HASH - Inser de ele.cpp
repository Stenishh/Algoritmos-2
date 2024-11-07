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

int main()
{

	int m;
	int k;
	int i;
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

	for(i = 0; i < m; i++)
	{
		cout << t[i].k << " ";
	}

	cout << endl;


	return 0;
}