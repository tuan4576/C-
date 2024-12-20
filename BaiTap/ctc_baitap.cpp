#include "baitap.h";
int a, b, S, H, n, x, T;
int cv, chon;
double SD;

int LK,d;
int main() {
	cout << "\n1. vao bai co ban";
	cout << "\n2. Liet ke cac uoc so";
	cout << "\nBan can nhap cong viec "; cin >> chon;
    switch (chon) {
    case 1: 
		do {
			system("cls");
			cout << "\nNhap cong viec can chon";
			cout << "\n0. Nhap 0 de thoat";
			cout << "\n1. Nhap phan tu N";
			cout << "\n2. Tinh Tong S(n) = 1 + 2 + 3 +...+ n";
			cout << "\n3. Tinh Tong S(n) = 1^2 + 2^2 +...+ n^2";
			cout << "\n4. Tinh Tong S(n) = 1 + 1/2 + 1/3 +...+ 1/n";
			cout << "\n5. Tinh Tong S(n) = 1/2 + 1/4 +...+ 1/2n";
			cout << "\n6. Tinh Tong S(n) = 1 + 1/3 + 1/5 +...+ 1/(2n - 1)";
			cout << "\n7. Tinh S(n) = 1/(1*2) + 1/(2*3) +..+1 /(n x (n + 1))";
			cout << "\n8. Tinh S(n) = 1/2 + 2/3 + 3/4 +...+ n / (n + 1)";
			cout << "\n9. Tinh S(n) = 1/2 + 3/4 + 5/6 + … + (2n + 1)/( 2n + 2)";
			cout << "\n10. Tinh T(n) = 1 * 2 * 3 *...* N";
			cout << "\n11. Tinh T(x, n) = x^n";
			cout << "\nBan can nhap cong viec "; cin >> cv;
			switch (cv) {
			case 0:
				break;
			case 1:
				NhapN(n);
				break;
			case 2:
				TinhTongS(n, S);
				cout << "Tong n la: " << S << endl;
				break;
			case 3:
				Bai2(n, S);
				cout << "Tong n la: " << S << endl;
				break;
			case 4:
				Bai3(n, SD);
				cout << "Tong n la: " << SD << endl;
				break;
			case 5:
				Bai4(n, SD);
				cout << "Tong n la: " << SD << endl;
				break;
			case 6:
				Bai5(n, SD);
				cout << "Tong n la: " << SD << endl;
				break;
			case 7:
				Bai6(n, SD);
				cout << "Tong n la: " << SD << endl;
				break;
			case 8:
				Bai7(n, SD);
				cout << "Tong n la: " << SD << endl;
				break;
			case 9:
				Bai8(n, SD);
				cout << "Tong n la: " << SD << endl;
				break;
			case 10:
				Bai9(n, S);
				cout << "Tong n la: " << S << endl;
				break;
			case 11:
				cout << "Nhap x: ";cin >> x;
				Bai10(n, x , T);
				cout << "Luy thua la: " << T << endl;
				break;
			}

			system("pause");
		} while (cv != 0);
        break;
	case 2:
		do {
			system("cls");
			cout << "\nNhap cong viec can chon";
			cout << "\n0. Nhap 0 de thoat";
			cout << "\n1. Nhap phan tu N";
			cout << "\n2. Liet ke cac uoc so nguyen duong n";
			cout << "\n3. Tong cac uoc so duong n";
			cout << "\n4. Tich cac uoc so duong n";
			cout << "\n5. So luong cac uoc so duong n";
			cout << "\n6. Liet ke cac uoc so le duong n";
			cout << "\n7. Liet ke cac uoc so chan duong n";
			cout << "\n8. Tong cac uoc so chan nguyen duong n";
			cout << "\n9. Tong cac uoc so le nguyen duong n";
			cout << "\n10. Tong cac uoc so nho hon chinh no ";
			cout << "\n11. Uoc so le lon nhat la ";
			cout << "\n12. Kiem tra so hoan thien ";
			cout << "\n13. Kiem tra so nguyen to ";
			cout << "\nBan can nhap cong viec "; cin >> cv;
			switch (cv) {
			case 0:
				break;
			case 1:
				Nhapn(n);
				break;
			case 2:
				cout << "Cac uoc so la: ";
				Bai20(n);
				break;
			case 3:
				Bai21(n,S);
				cout << "Tong cac uoc so la " << S << endl;
				break;
			case 4:
				Bai22(n, T);
				cout << "Tich cac uoc so la " << T << endl;
				break;
			case 5:
				Bai23(n, d);
				cout << "So luong cac uoc so la " << d << endl;
				break;
			case 6:
				cout << "Cac uoc so le la: ";
				Bai24(n);
				break;
			case 7:
				cout << "Cac uoc so chan la: ";
				Bai25(n);
				break;
			case 8:
				Bai26(n, S);
				cout << "Tong cac uoc so chan la: " << S << endl;
				break;
			case 9:
				Bai27(n, S);
				cout << "Tong cac uoc so le la: " << S << endl;
				break;
			case 10:
				Bai28(n, S);
				cout << "Tong cac uoc so nho hon chinh no la: " << S << endl;
				break;
			case 11:
				Bai29(n);
				break;
			case 12:
				Bai30(n,S);
				if (S == n) {
					cout << "La so hoan thien" << endl;
				}
				else
				{
					cout << "Khong phai la so hoan thien" << endl;
				}
				break;
			case 13: 
				if (Bai31(n)) { // Sử dụng kết quả trả về của Bai31(n)
					cout << "La so nguyen to";
				}
				else {
					cout << "Khong phai la so nguyen to" << endl;
				}
				break;
			case 14:
				if (Bai32(n)) {
					cout << "La so chinh phuong " << endl;
				}
				else {
					cout << "Khong phai la so chinh phuong " << endl;
				}
			}
			system("pause");
		} while (cv != 0);
		break;
	break;
    }
	system("pause");
	return 0;
}