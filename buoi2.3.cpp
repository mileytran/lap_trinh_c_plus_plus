#include <iostream>

using namespace std;

main ()
{
//	 //int a,b;
//    cout <<"nhap vao gia tri cua a:" << endl;
//    cin >> a;
//    cout <<"nhap b" <<endl;
//    cin >>b;
//    cout <<"tong a va b la: " <<a+b <<endl; //chu y
//    //bt: nhap ten, diem 3 mon toan ly hoa
//    //xuat ra man hinh: ten, diem toan, diem ly, diem hoa, tb 3 mon
//    string e ="ho va ten:";
//    cout << e;
//    cin >>e;
    string name;
    float toan, ly, hoa;
    cout << "nhap vao ten cua ban:" <<endl;
    getline(cin,name);
    cout<<"nhap vao diem mon toan:" <<endl;
    cin>>toan;
    cout<<"nhap ly:"<<endl;
    cin>>ly;
    cout<<"nhap hoa"<<endl;
    cin>>hoa;
    cout << "ten cua ban la" <<name <<endl
    <<"diem toan "<<toan <<endl
    <<"diem ly"<<ly <<endl
    <<"diem hoa"<<hoa<<endl
    <<"diem tb 3 mon"<< (toan+ly+hoa)/3;
}
