#include"Khachhang.h"
KhachHang::KhachHang() : MAKH(""), Ten_KH(""), SDT("") {}

string KhachHang::getMAKH() { return MAKH; }
string KhachHang::getTen_KH() { return Ten_KH; }
string KhachHang::getSDT() { return SDT; }

void KhachHang::setMAKH(string makh) { MAKH = makh; }
void KhachHang::setTen_KH(string ten_kh) { Ten_KH = ten_kh; }
void KhachHang::setSDT(string sdt) { SDT = sdt; }

void KhachHang::nhap() {
    cout << "Nhap ma KH: ";
    cin >> MAKH;
    cin.ignore();
    cout << "Nhap ten KH: ";
    getline(cin, Ten_KH);
    cout << "Nhap so dien thoai: ";
    cin >> SDT;
}

void KhachHang::TTKH() {
    cout << "Ma KH: " << MAKH << ", Ten KH: " << Ten_KH << ", SDT: " << SDT << endl;
}
