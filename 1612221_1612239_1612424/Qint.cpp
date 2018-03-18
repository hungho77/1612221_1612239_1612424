#include"Qint.h"


void SetBit(QInt &a, int bit, int i)
{
	a.data[i / 32] | (bit << (31 - i % 32));
}
string strDiv2(string strX)
{
	string strResult;
	int nValue, nMod = 0;
	int index = 0;
	for (int i = 0; i < strX.length();i++)
	{
		nValue = (strX[i] + nMod*10 - 48) / 2;
		if (nValue)
		{
			strResult[index] = nValue;
			index++;
		}
		nMod = (strX[i] - 48) % 2;
	}
}
void StrToQInt(string strX, QInt &a)
{
	// bắt đầu set bit tại vị trí cuối cùng
	int i = 127; 
	while (strX != "0")
	{
		// Tính phần dư
		int bit = (strX[strX.length() - 1] - 48) % 2; 
		// Tạo bit (biến bit) tại vị trí bit i của biến a
		SetBit(a, i, bit); 
		// Chia chuỗi số X cho 2
		strX = strDiv2(strX); 
		i--;
	}
}
void ScanQInt(QInt &x)
{
	string strX;
	cin >> strX;
	for (int i = 0; i < 4; i++)
		x.data[i] = 0;
	StrToQInt(strX, x);
}
void PrintQInt(QInt x)
{

}

