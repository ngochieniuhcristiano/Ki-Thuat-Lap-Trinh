#include <iostream>
#include <fstream>
#include "Data.h"
#include "NhapCS.h"

using namespace std;

void ghiFile(const char *tenFile) {
	ofstream f(tenFile);
	if (!f.is_open()) {	
		cout << "Khong the mo file " << tenFile << endl;
		return;  
	}

	int n;
	cout << "Nhap so luong CS : ";
	cin >> n;

	CuonSach cs;  
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin CS thu " << i + 1 << ":" << endl; 
		nhapCuonSach(&cs);  
		f<< cs.maCS << " " << cs.giaCS<< " " << cs.loaiCS << " " << cs.danhgia << endl;	
	}

	f.close();
}
