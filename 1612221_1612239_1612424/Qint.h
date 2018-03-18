#pragma once
#include<iostream>
#include<string>
using namespace std;
struct QInt
{
	//dữ liệu lưu 128 bit
	int data[4];
};

void SetBit(QInt &a, int bit, int i);
string strDiv2(string strX);
//hàm chuyển chuỗi về kiểu QInt
void StrToQInt(string strX, QInt &a);
//hàm nhập 
void ScanQInt(QInt &x);
//hàm xuất
void PrintQInt(QInt x);
//hàm chuyển từ hệ thập phân sang hệ nhị phân
bool * DecToBin(QInt x);
//hàm chuyển từ hệ nhị phân sang hệ thập phân
QInt BinToDec(bool *bit);
//hàm chuyển từ hệ nhị phân sang hệ 16
char *BinToHex(bool *bit);
//hàm chuyển từ hệ thập phân sang hệ 16
char *DecToHex(QInt x);