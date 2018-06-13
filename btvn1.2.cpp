#include <iostream>

using namespace std;

main ()
{
	string name;
	cout <<"Ho va Ten:"; getline(cin,name);
	float a,b,c, dtb;
	cout <<"Diem mon Toan:"; cin>>a;
	cout <<"Diem mon Ly:"; cin>>b;
	cout <<"Diem mon Hoa:"; cin>>c;
	cout <<"Diem trung binh:" << (a+b+c)/3 <<endl;
	dtb = (a+b+c)/3;
	
	if (dtb <5)
		{
		cout <<"Yeu"<< endl;
		}
	else if ( dtb >= 5 && dtb <6)
		{
		cout <<"Trung Binh"<<endl;
		}
	else if (dtb >= 6 && dtb <7)
		{
		cout <<"kha"<<endl;
		}
	else if (dtb >=7 && dtb <8 )
		{
		cout <<"Gioi"<<endl;
		}
	else
		{ 
		cout <<"Xuat Sac"<<endl;
		}
}


