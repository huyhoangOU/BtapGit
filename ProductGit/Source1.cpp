#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false; // Số <= 1 không phải số nguyên tố
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // Nếu chia hết cho i thì không phải số nguyên tố
    }
    return true;
}

// Hàm hiển thị menu
void displayMenu() {
    cout << "===== MENU =====" << endl;
    cout << "1. Kiem tra so nguyen to" << endl;
    cout << "2. Kiem tra nam nhuan" << endl;
    cout << "0. Thoat" << endl;
    cout << "Chon chuc nang: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int num;
            cout << "Nhap mot so nguyen duong: ";
            cin >> num;
            while (num <= 0) {
                cout << "Vui long nhap so nguyen duong: ";
                cin >> num;
            }
            if (isPrime(num)) {
                cout << num << " la so nguyen to!" << endl;
            }
            else {
                cout << num << " khong phai la so nguyen to!" << endl;
            }
            break;
        }
        case 2:
            cout << "Chuc nang 2 chua duoc thuc hien." << endl;
            break;
        case 0:
            cout << "Tam biet!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}