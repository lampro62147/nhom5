#include <iostream>
#include <cmath>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool ktsonguyento(int n);
int tong(int a, int b) {
    return a + b;
}
int hieu(int a, int b) {
    return a - b;
}

int tich(int a, int b) {
    return a * b;
}

bool ktsonguyento(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}

int main()
{
	int a, b;
	int n;
	cout << "Nhap so thu nhat: ";
    cin >> a;
    
    cout << "Nhap so thu hai: ";
    cin >> b;
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Tong = " << tong(a, b) << endl;
	cout << "Hieu = " << hieu(a, b) << endl;
    cout << "Tich = " << tich(a, b) << endl;
	cout << "Nhap mot so de kiem tra so nguyen to: ";
    cin >> n;
    if (ktsonguyento(n)) {
        cout << n << " la so nguyen to!" << endl;
    } else {
        cout << n << " khong phai la so nguyen to!" << endl;
    }
	system("pause");
	return 0;
}