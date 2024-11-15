#include <bits/stdc++.h>
using namespace std;

struct DiaChi
{
	string soNha;
	string ten_Duong;
	string tinh_thanh;
};
struct TenTruong
{
	string ten_truong;
};
struct Sinh_Vien
{
	string Ma_SV;
	string ten_SV;
	bool gioi_Tinh;
	DiaChi Dia_chi_nhaSV;
	TenTruong ten_truongSV;
}sv1 , sv2;

struct sinhVien
{
	string ma;
	string ten;
};

void input_array(sinhVien danh_sach[], int total) //xóa bộ nhớ đệm cin.ignore())
{
	for (int i = 0; i < total; i++)
	{
		cout << "nhap thong tin sv thu " << i + 1 << endl;
		cout << "nhap ma : ";
		getline(cin, danh_sach[i].ma);
		cin.ignore();
		cout << "nhap ten : ";
		getline(cin, danh_sach[i].ten);
		cin.ignore();
	}
}
void output_array(sinhVien danh_sach[], int total)
{
	for  (int i = 0; i < total; i++)
	{
		cout << i + 1 << "." << " "	 << danh_sach[i].ma << " " << danh_sach[i].ten << endl;
	}
}
struct book
{
	string tieude;
	string tacgia;
	string gia_sach;
};
int main()
{
	sv1 = { {"056206010671"},{"Huu Dung"},{true},{{"09"},{"Tu Van"},{"Nha Trang "}},{"Hoang Hoa Tham"}};
	cout << " Ma sinh vien : " << sv1.Ma_SV << endl;
	cout << " Ten sinh vien : " << sv1.ten_SV << endl;
	cout << " Gioi tinh : " << (sv1.gioi_Tinh == true ? "Nam" : "Nu") << endl;	
	cout << " Dia chi nha SV : " << sv1.Dia_chi_nhaSV.soNha << " " << sv1.Dia_chi_nhaSV.ten_Duong << " " << sv1.Dia_chi_nhaSV.tinh_thanh << endl;
	cout << " Truong theo hoc : " << sv1.ten_truongSV.ten_truong << endl;
	cout << endl;
	cout << endl;
	book quyen1;
	cout << "Ten sach : ";
	getline(cin, quyen1.tieude);
	cout << "Tac gia : ";
	getline(cin, quyen1.tacgia);
	cout << "Gia sach : ";
	getline(cin, quyen1.gia_sach);
	book quyen2 = quyen1;
	cout << "quyen 2 " << endl;
	cout << "tac gia : " << quyen2.tacgia << endl;
	cout << "tieu de : " << quyen2.tieude << endl;
	cout << "gia sach : " << quyen2.gia_sach << endl;
	cout << "Check q1 : " << &quyen1 << endl;
	cout << "Check q2 : " << &quyen2 << endl;	
	cout << endl;
	int const total = 5;
	sinhVien danh_sach[total];
	input_array(danh_sach, total);
	output_array(danh_sach, total);
}