#include"CDamnhac.h"

CDAmNhac::CDAmNhac() : SanPham(), Ten_ca_si(""), Ten_dv_sx("") {}

void CDAmNhac::nhap() {
    SanPham::nhap();
    cin.ignore();
    cout << "Nhap ten ca si: ";
    getline(cin, Ten_ca_si);
    cout << "Nhap ten don vi san xuat: ";
    getline(cin, Ten_dv_sx);
}

void CDAmNhac::hienThi() {
    SanPham::hienThi();
    cout << "Ten ca si: " << Ten_ca_si << ", Ten don vi san xuat: " << Ten_dv_sx << endl;
}