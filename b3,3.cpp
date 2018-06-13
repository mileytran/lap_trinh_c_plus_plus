#include <iostream>
#include <cmath>
using namespace std;

main ()
{

////giai pt bac 2 ax^2 +bx+c=0
////neu a==0 pt tro ve bac 1, giai pt bac 1
//neu a!=0 tien hanh giai pt bac 2:
//	delta >0:pt co 2 nghiem
//	delta=0:pt co nghiem kep
//	delta<0: ptvn
//delta= pow(b,2)-4*a*c
//sqrt(delta)
	float a,b,c, delta; 
	cout<<"nhap a"<<endl
	<<"nhap b"<<endl
	<<"nhap c"<<endl;
	cin >>a;
	cin>>b;
	cin >>c;
	delta = pow(b,2)- 4*a*c;
	if (a==0)
	{
		if (b==0 &c==0)
		{
			cout<<"pt co vsn"<<endl;
		}
		else if (b!=0 && c!=0)
		{
			cout<<"pt co nghiem duy nhat x="<< -c/b<<endl;
		}
		else (b==0 && c!=0);
		{
			cout<<"pt vo nghiem"<<endl;
		}
		
	}
	else 
	{
		if(delta>0)
	
		{
		cout <<"pt co 2 nghiem"<<endl
		<<"x1="<< (-b-sqrt(delta))/(2*a)<<endl
		<<"x2="<< (-b+sqrt(delta))/(2*a)<<endl;
		
		}
		else if (delta==0)
		{
			cout<<"PT co nghiem kep"<<endl
			<<"x="<<-b/(2*a)<<endl;
			
		}
		else
		{
			cout<<"PT vo nghiem"<<endl;
		}
	}
}
