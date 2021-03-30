#include<iostream>
using namespace std;
void f(int a[])
{
	for(int i=0;i<5;i++)
	{
		cout << "Dia chi cua bien mang " << &a[i] << endl;
	}
}

int main ()
{
	int arr[5] = {1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		cout << "Dia chi cua bien mang trong main " << &arr[i] << endl;
	}
	f(arr);
	return 0;
}
//ket qua ham main va mang in ra la giong nhau
// 1 mang in ra cac dia chi 0 4 8 lien ke nhau trong bo nho 
