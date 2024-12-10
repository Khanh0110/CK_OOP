#ifndef CD_H
#define CD_H
#include"Sanpham.h"

class CDAmNhac : public SanPham {
private:
    string Ten_ca_si, Ten_dv_sx;

public:
    CDAmNhac();
    void nhap() override;
    void hienThi() override;
};

#endif CD_H