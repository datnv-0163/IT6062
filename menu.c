#include <stdio.h>
#include "color.h"

void chatFunction(){
	char *ptr1 = "CHỨC NĂNG PHÒNG CHAT";
	char *ptr2 = "||0.DANH SÁCH NGƯỜI ONLINE||";
	char *ptr3 = "||1.TẠO PHÒNG||";
	char *ptr4 = "||2.VÀO PHÒNG||";
	char *ptr5 = "||3.DANH SÁCH CÁC PHÒNG||";
	char *ptr6 = "||4.CHAT ĐƠN||";
	char *ptr7 = "||5.ĐĂNG XUẤT||";
	char *ptr8 = "||CHỌN||";
	printf(MAG"\n%53s\n",ptr1);
	printf(CYN"=============================********************=============================\n");
	printf(GRN"%s"RESET YEL"%22s"RESET BLU"%30s\n"RESET,ptr2,ptr3,ptr4);
	printf(CYN"%s"RESET WHT"%23s"RESET RED"%33s\n"RESET,ptr5,ptr6,ptr7);
	printf(MAG"%45s\n",ptr8);
}

void menu(){
	char *ptr1 = "QUẢN LÝ NGƯỜI DÙNG";
	char *ptr2 = "||1.ĐĂNG KÝ||";
	char *ptr3 = "||2.ĐĂNG NHẬP||";
	char *ptr4 = "||3.THOÁT||";
	char *ptr5 = "||CHỌN||";
	printf(MAG"\n%50s\n",ptr1);
	printf(CYN"========================********************========================\n");
	printf(GRN"%s"RESET YEL"%32s"RESET RED"%30s\n"RESET,ptr2,ptr3,ptr4);
	printf(MAG"%39s",ptr5);
}