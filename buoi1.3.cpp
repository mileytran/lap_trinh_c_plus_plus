#include <iostream>

using namespace std;

main()
{
	 // % la phep chia lay so du
	 // bt khai bao 2 bien a, b kieu so nguyen
	 int a,b;
	 a=10;
	 //a += 10; // a=a+10
	 //a -= 10; // a=a-10
	 //a *= 10;
	 //a /= 10;
	// a %= 10;
	cout << a+2 <<endl;
	cout <<a /2 << endl;
	cout <<a % 2 <<endl;
	b=4;
	 cout << a+b <<endl
	 <<a-b << endl
	 <<a*b<< endl
	 << (float) a/b <<endl // ep them (float) de cho ra kieu so thuc (co phan thap phan), neu ko co float thi chi cho ra thuong so la integer
	 <<a % b ;
	//bt tinh a +=b; a-=b; a/= b; a%=b; a*=b;
	a +=b;
	cout <<a <<endl;
	a-=b;
	cout <<a <<endl;
	a/=b;
	cout <<a <<endl;
	a %=b;
	cout <<a <<endl;
	a*=b;
	cout <<a;
	
	
}
