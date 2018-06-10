#include <iostream>

using namespace std;

main ()
{
	//dieu kien: toan ly hoa nam trong khoang 0 den 10, dung thi tinh dtb, xuat ra man hinh, if false thi cout ban da nhap sai 
	
	
	int toan,ly,hoa;
	cin >>toan >> ly >> hoa;
	if(toan>=0 ||toan <=10 && ly>=0 || ly <=10 &&hoa>=0 || hoa <=10)
	{
		cout <<"diem toan la: "<<toan<<endl
		<<"diem ly la" <<ly<<endl
		<<"diem hoa la"<<hoa<<endl
		<<"diem tbc la:"<<(toan+ly+hoa)/3<<endl;
	}
	else
	{
		cout<<"ban da nhap sai"<<endl;
	}
	
	
}


