#include <stdio.h>
#include "Data.h"
#include "F_DanhSachCS.h"
#include "F_DanhGiaCS.h"

int main() {
    const char *tenFileGhi = "Dulieu.txt";
    ghiFile(tenFileGhi);

    const char *tenFileDoc = "dulieu.txt";
    const char *tenFileGhiDanhGia = "danhgia3saoden5sao.txt";
    docVaGhiFile(tenFileDoc, tenFileGhiDanhGia);

    return 0;
}
