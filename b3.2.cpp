//bt giai pt bac 1 ax+b=0
// neu a=0, b=0 pt co vsn
//neu a |=0 , b|= 0 pt co only one nghiem x= -b/a
//meu a=0, b |=0 pt vo nghiem
//ghi nho: a=0 gan gia tri 0 cho a
// a== 0 thi kiem tra a co bang 0
#include <iostream>

using namespace std;

main ()
{
	int a, b;
	cout << "nhap a"<<endl;
	cin >>a;
	cout <<"nhap b"<<endl;
	cin >>b;
	if (a== 0 && b == 0)
	{
		cout<<"pt co vsn"<<endl;
	}
	else if (a!=0 && b!=0)
	{
		cout<<"pt co nghiem duy nhat x="<< (float)-b/a<<endl;
	}
	else (a==0 && b!=0);
	{
		cout<<"pt vo nghiem";
	}
}
