// Lớp SanPham
#ifndef SANPHAM_H
#define SANPHAM_H
#include<iostream>
#include<string>
using namespace std ;
class SanPham {
protected:
    string MASP;
    string Tieu_de;
    int Gia_ban;

public:
    SanPham();
    SanPham(string masp, string tieu_de, int gia_ban);

    string getMASP();
    string getTieu_de();
    int getGia_ban();

    void setMASP(string masp);
    void setTieu_de(string tieu_de);
    void setGia_ban(int gia_ban);

    virtual void nhap();
    virtual void hienThi();
    virtual ~SanPham() = default;
};

#endif SANPHAM_H