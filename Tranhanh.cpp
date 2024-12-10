#include"Tranhanh.h"
TranhAnh::TranhAnh() : SanPham(), Chieu_rong(0), Chieu_cao(0), Ten_hs("") {}

void TranhAnh::nhap() {
    SanPham::nhap();
    cout << "Nhap chieu rong: ";
    cin >> Chieu_rong;
    cout << "Nhap chieu cao: ";
    cin >> Chieu_cao;
    cin.ignore();
    cout << "Nhap ten hoa si: ";
    getline(cin, Ten_hs);
}

void TranhAnh::hienThi() {
    SanPham::hienThi();
    cout << "Chieu rong: " << Chieu_rong << ", Chieu cao: " << Chieu_cao << ", Ten hoa si: " << Ten_hs << endl;
}
