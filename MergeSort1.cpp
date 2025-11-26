#include<vector>
using namespace std;
int tmp[101];
void MergeSort(int v[], int st, int dr)
{
	if (st < dr)
	{
		int m = (st + dr) / 2;
		MergeSort(v, st, m);
		MergeSort(v, m + 1, dr);

		int i = st, j = m + 1, k = 0;
		while (i <= m && j <= dr)
			if (v[i] < v[j])
				tmp[++k] = v[i++];
			else
				tmp[++k] = v[j++];
		while (i <= m)
			tmp[k++] = v[i++];
		while (j <= dr)
			tmp[++k] = v[j++];
		for (i = st, j = 1; i <= dr; i++, j++)
			v[i] = tmp[j];

	}
}
int main()
{
	int v[6] = { 5,2,8,1,3,7 };
	int n = 6;
	MergeSort(v, 0, n - 1);
	cout << "Sortat: ";
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}