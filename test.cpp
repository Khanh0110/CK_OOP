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
    int hoaDonLonNhat = 0; // Biến lưu chỉ số của hóa đơn có giá trị lớn nhất

    for (int i = 0; i < soLuongHoaDon; i++) {
        cout << "\nNhap thong tin cho hoa don thu " << (i + 1) << ":\n";
        danhSachHoaDon[i].nhapHoaDon();
    }

    cout << "\nDanh sach hoa don:\n";
    for (int i = 0; i < soLuongHoaDon; i++) {
        cout << "\nHoa don thu " << (i + 1) << ":\n";
        danhSachHoaDon[i].hienThiHoaDon();
        int giaTriHoaDon = danhSachHoaDon[i].tinhGiaTri();
        tongThuNhap += giaTriHoaDon; // Cộng dồn tổng giá trị

        // Cập nhật hóa đơn có giá trị lớn nhất
        if (giaTriHoaDon > danhSachHoaDon[hoaDonLonNhat].tinhGiaTri()) {
            hoaDonLonNhat = i;
        }
    }

    // In tổng thu nhập
    cout << "\nTong thu nhap: " << tongThuNhap << endl;

    // In thông tin khách hàng có hóa đơn lớn nhất
    cout << "\nKhach hang co hoa don gia tri lon nhat:\n";
    danhSachHoaDon[hoaDonLonNhat].hienThiHoaDon();

    delete[] danhSachHoaDon;

    return 0;
}
