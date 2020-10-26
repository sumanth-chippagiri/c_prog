//A program to find GCD of two numbers 
#include<bits/stdc++.h>
using namespace std;
int GCD(int aa,int bb)
{
	if(aa==0)
		return bb;
	if(bb==0)
		return aa;
	if(aa==bb)
		return aa;
	if(aa>bb)
		return GCD(aa-bb,bb);
	return GCD(aa,bb-aa);
}
int main()
{
	int a,b;
	cout << "Enter two no.'s:\n";
	cin >> a >> b;
	int gcd=GCD(a,b);
	cout << "GCD of two no.'s is:\n";
	cout << gcd;
}