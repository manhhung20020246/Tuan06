#include<iostream>
using namespace std;
double H(int N) {
 if (N == 1) return 0.0;
 return H(N-1) + 1.0/N;
}
int main () 
{
	int a;
	cin >> a;
	cout << H(a);
	return 0;
}
//chay binh thuong voi a tu 5000-32000, voi gia tri lon hon thi se ko cho ket qua.
//ko hien ket qua do tran stack
