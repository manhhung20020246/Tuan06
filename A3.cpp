#include<iostream>
using namespace std;
double H(int N) {
 if (N == 1) return 1.0;
 return H(N) + 1.0/N;
}
int main()
{
int n;
cin >> n;
H(n);
}
/*Hien tuong: sau khi nhap n=1, chuong trinh chay binh thuong
voi n!=1 thi se hien thong bao stopped working
n=0 khong thoa man do n co dieu kien !=0
n!={1,0} thi se hien thong bao stopped working do vong lap vo han*/
