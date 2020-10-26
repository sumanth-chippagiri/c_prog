//A program to find GCD of two numbers 
#include<bits/stdc++.h>
using namespace std;
template<class T>
T GCD(T aa,T bb)
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
	double a,b;
	cout << "Enter two numbers: ";
	cin>>a>>b;
	a=(a>0)?a:-a;
	b=(b>0)?b:-b;
	cout << "GCD of two no.'s is: "<<GCD(int(a),int(b));
}
