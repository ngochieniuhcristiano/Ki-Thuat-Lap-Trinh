#include <stdio.h>
#include <string.h> 
#include <ctype.h> 
#include "Data.h"

void nhapCuonSach(CuonSach *cs){
	do{
	printf("Nhap ma CS (5 ki tu, ki tu dau la chu cai): ");
	scanf("%s", cs->maCS);
	} while (strlen(cs->maCS) != 5 || !isalpha(cs->maCS[0]));

	do{
	printf("Nhap gia Cuon Sach (la so tron nghin): ");
	scanf("%d", &cs->giaCS);
	} while (cs->giaCS % 1000 != 0);
	
	do{
	printf("Nhap loai sach (0/1/2): ");
	scanf("%d", &cs->loaiCS);
	} while (cs->loaiCS < 0 || cs->loaiCS > 2);

	do{
	printf("Nhap so danh gia (0 den 5): ");
	scanf("%d", &cs->danhgia);
	} while (cs->danhgia < 0 || cs->danhgia > 5);
}