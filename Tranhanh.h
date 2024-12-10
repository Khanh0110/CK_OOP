#ifndef TRANHANH_H
#define TRANHANH_H
#include"Sanpham.h"
// Lớp TranhAnh
class TranhAnh : public SanPham {
private:
    int Chieu_rong, Chieu_cao;
    string Ten_hs;

public:
    TranhAnh();
    void nhap() override;
    void hienThi() override;
};
#endif TRANHANH_H