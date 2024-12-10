#include"Hoadon.h"
HoaDon::HoaDon() : sanPham(nullptr), soLuong(0) {}

HoaDon::~HoaDon() {
    delete sanPham; // Giải phóng bộ nhớ động
}

void HoaDon::nhapHoaDon() {
    cout << "Nhap thong tin khach hang:\n";
    khachHang.nhap();

    int loaiSanPham;
    cout << "Chon loai san pham (1: Tranh Anh, 2: CD Am Nhac): ";
    cin >> loaiSanPham;

    if (loaiSanPham == 1) {
        sanPham = new TranhAnh();
    } else if (loaiSanPham == 2) {
        sanPham = new CDAmNhac();
    } else {
        cout << "Loai san pham khong hop le!\n";
        return;
    }

    sanPham->nhap();

    cout << "Nhap so luong san pham: ";
    cin >> soLuong;
}

void HoaDon::hienThiHoaDon() {
    cout << "\nThong tin hoa don:\n";
    khachHang.TTKH();
    if (sanPham != nullptr) {
        sanPham->hienThi();
    }
    cout << "So luong: " << soLuong << endl;
}

int HoaDon::tinhGiaTri() {
    if (sanPham != nullptr) {
        return sanPham->getGia_ban() * soLuong;
    }
    return 0;
}