#ifndef KHACHHANG_H
#define KHACHHANG_H
#include<iostream>
#include<string>
using namespace std ;
class KhachHang {
private:
    string MAKH, Ten_KH, SDT;

public:
    KhachHang();

    string getMAKH();
    string getTen_KH();
    string getSDT();

    void setMAKH(string makh);
    void setTen_KH(string ten_kh);
    void setSDT(string sdt);

    void nhap();
    void TTKH();
};

#endif KHACHHANG_H
