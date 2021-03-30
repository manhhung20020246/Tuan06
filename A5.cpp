#include<iostream>
using namespace std;
long F(int n) {					//de quy
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}
long Fibonacci(int n)			//ko de quy
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main ()
{
	int x;
	cin >> x;
	cout << "Dung de quy: " << F(x) << endl;
	//cout << "Dung vong lap: " << Fibonacci(x) << endl;
}

//thoi gian chay cua su dung de quy se lau hon su dung vong lap for
