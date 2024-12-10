#include"Khachhang.h"
#include"Sanpham.h"
#include"Tranhanh.h"
#include"CDamnhac.h"
#include"Hoadon.h"
#include<iostream>
using namespace std;

// Hàm main
int main() {
    int soLuongHoaDon;
    cout << "Nhap so luong hoa don: ";
    cin >> soLuongHoaDon;

    HoaDon* danhSachHoaDon = new HoaDon[soLuongHoaDon];
    int tongThuNhap = 0; // Biến lưu tổng thu nhập

    for (int i = 0; i < soLuongHoaDon; i++) {
        cout << "\nNhap thong tin cho hoa don thu " << (i + 1) << ":\n";
        danhSachHoaDon[i].nhapHoaDon();
    }

    cout << "\nDanh sach hoa don:\n";
    for (int i = 0; i < soLuongHoaDon; i++) {
        cout << "\nHoa don thu " << (i + 1) << ":\n";
        danhSachHoaDon[i].hienThiHoaDon();
        tongThuNhap += danhSachHoaDon[i].tinhGiaTri(); // Cộng dồn tổng giá trị
    }

    // In tổng thu nhập
    cout << "\nTong thu nhap: " << tongThuNhap << endl;

    delete[] danhSachHoaDon;

    return 0;
}
