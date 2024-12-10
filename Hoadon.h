
#include"Khachhang.h"
#include"Sanpham.h"
#include"Tranhanh.h"
#include"CDamnhac.h"
class HoaDon {
private:
    KhachHang khachHang;
    SanPham* sanPham;
    int soLuong;

public:
    HoaDon();
    ~HoaDon();
    void nhapHoaDon();
    void hienThiHoaDon();
    int tinhGiaTri(); // Phương thức mới
};