#include"Sanpham.h"
using namespace std ;
SanPham::SanPham() : MASP(""), Tieu_de(""), Gia_ban(0) {}
SanPham::SanPham(string masp, string tieu_de, int gia_ban) : MASP(masp), Tieu_de(tieu_de), Gia_ban(gia_ban) {}

string SanPham::getMASP() { return MASP; }
string SanPham::getTieu_de() { return Tieu_de; }
int SanPham::getGia_ban() { return Gia_ban; }

void SanPham::setMASP(string masp) { MASP = masp; }
void SanPham::setTieu_de(string tieu_de) { Tieu_de = tieu_de; }
void SanPham::setGia_ban(int gia_ban) { Gia_ban = gia_ban; }

void SanPham::nhap() {
    cout << "Nhap ma SP: ";
    cin >> MASP;
    cin.ignore();
    cout << "Nhap tieu de SP: ";
    getline(cin, Tieu_de);
    cout << "Nhap gia ban: ";
    cin >> Gia_ban;
}

void SanPham::hienThi() {
    cout << "MASP: " << MASP << ", Tieu de: " << Tieu_de << ", Gia ban: " << Gia_ban << endl;
}
