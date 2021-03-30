#include<iostream>
using namespace std;
double H(int N)
{
 return H(N-1) + 1.0/N;
}
int main()
{
int n;
cin >> n;
H(n);
}
/*Hien tuong: sau khi nhap n thi se hien thong bao stopped working
do ham de quy chay theo vong lap vo han*/
