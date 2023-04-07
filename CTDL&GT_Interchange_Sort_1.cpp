void Sapxep(int a[], int n)
{
	for (int i = 0; i < n-1;i++)
		for (int j = i + 1; j < n;j++)
		if (a[i]>a[j])
			swap(a[i], a[j]);
}
Hàm đổi chỗ 2 phần tử( Swap).

void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
https://sinhvientot.net
