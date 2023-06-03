#include <iostream>
#include <fstream>
#include "Data.h"

using namespace std ; 

void docVaGhiFile(const char *tenFileDoc, const char *tenFileGhi) { 
	ifstream fDoc(tenFileDoc); 
	if (!fDoc.is_open()) {
		cout << "Khong the mo file " << tenFileDoc << endl;
		return;
	}

	ofstream fGhi(tenFileGhi);
	if (!fGhi.is_open()) {
		cout << "Khong the mo file " << tenFileGhi << std::endl;
		fDoc.close();
		return;
	}

	CuonSach cs; 
	while (fDoc >> cs.maCS >> cs.giaCS >> cs.loaiCS >> cs.danhgia) {
		if (cs.danhgia >= 3 && cs.danhgia <= 5) {
			fGhi << cs.maCS << " " << cs.giaCS<< " " << cs.loaiCS << " " << cs.danhgia << endl;
		}
	}

	fDoc.close();
	fGhi.close();
}
