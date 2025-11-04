#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int tong(int a, int b) {
    return a + b;
}
int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

int main()
{
	int a, b;
	cout << "Nhap so thu nhat: ";
    cin >> a;
    
    cout << "Nhap so thu hai: ";
    cin >> b;
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Tong = " << tong(a, b) << endl;
	cout << "Hieu = " << hieu(a, b) << endl;
    cout << "Tich = " << tich(a, b) << endl;
	system("pause");
	return 0;
}