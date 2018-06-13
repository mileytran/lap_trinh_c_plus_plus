#include<iostream>

using namespace std;

main ()
{
	float a,b;
	cout <<"nhap a:";
	cin >>a;
	cout << "nhap b";
	cin >>b;
	if (a-b>0)
	{
		cout <<"a lon hon b"<<endl;
	}
	else if (a-b <0)
	{
		cout <<"a nho hon b" <<endl;
	}
	else
	{
		cout <<"a bang b";
	}
}
