#include "baitap.h"

void NhapSo(int& a, int& b) {
	cout << "Nhap so a la: ";
	cin >> a;
	cout << "Nhap so b la: ";
	cin >> b;
}
int TinhTong(int a, int b,int &S) {
	return S = a + b;
}
int TinhHieu(int a, int b, int &H) {
	return H = a - b;
}
void NhapN(int& n) {
	cout << "Nhap so N: ";
	cin >> n;
}
int TinhTongS(int n,int &S) {
	S = 0;
	for (int i = 0; i <= n; i++) {
		S += i;
	}
	return S;
}
int Bai2(int n, int &S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += i * i;
	}
	return S;
}
int Bai3(int n, double &S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += 1.0/i;
	}
	return S;
}
int Bai4(int n, double& S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += 1.0 / (2 * i);
	}
	return S;
}
int Bai5(int n, double& S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += 1.0 / ((2 * i)-1);
	}
	return S;
}
int Bai6(int n, double& S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += 1.0 / (i*(i+1));
	}
	return S;
}
int Bai7(int n, double& S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += (float)i / ( i + 1);
	}
	return S;
}
int Bai8(int n, double& S) {
	S = 0;
	for (int i = 1; i <= n; i++) {
		S += (float)((2 * i) + 1) / ((2 * i) + 2);
	}
	return S;
}
int Bai9(int n, int& S) {
	/*S = 1;
	for (int i = 1; i <= n; i++) {
		S *= i;
	}
	return S;*/

	//do while
	/*S = 1;
	int i = 1;
	do {
		S *= i;
		i++;
	} while (i <= n);
	return S;*/
	// while
	S = 1;
	int i = 1;
	while (i <= n) {
		S *= i;
		i++;
	}
	return S;
}
int Bai10(int n, int& x, int& T) {
	T = 1; // Khởi tạo T = 1
	for (int i = 1; i <= n; i++) {
		T *= x; // Nhân dần với x
	}
	return T; // Trả về kết quả
	//c2
	//if (n == 0) {
	//	T = 1; // Nếu n = 0, T sẽ là 1 (xử lý trường hợp cơ bản)
	//	return T;
	//}

	//T = 1; // Khởi tạo lại T là 1 trước khi tính lũy thừa
	//for (int i = 1; i <= n; i++) {
	//	T *= x; // Tính lũy thừa
	//}

	//return T;
}


void Nhapn(int& n) {
	do {
		cout << "Nhap so N: ";
		cin >> n;
		if (n <= 0 ) {
			cout << "Vui long nhap lai so N lon hon 0." << endl;
		}
	} while (n <= 0);
}
void Bai20(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
 cout << endl;
}
int Bai21(int n, int& S) {
	S = 0;
	int i = 1;
	while (i <= n) {
		if (n % i == 0) {
			S += i;
		}
		i++;
	}
	return S;
}
int Bai22(int n, int& T) {
	T = 1;
	int i = 1;
	/*while (i <= n) {
		if (n % i == 0) {
			T *= i;
		}
		i++;
	}*/
	do {
		if (n % i == 0) {
			T *= i;
		}
		i++;
	} while (i<=n);
	return T;
}
int Bai23(int n, int& d) {
	d = 0;
	int i = 1;
	while (i <= n){
		if (n % i == 0) {
			d++;
		}
		i++;
	};
	return d;
}
void Bai24(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && i%2!=0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
void Bai25(int n) {
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && i % 2 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int Bai26(int n, int& S) {
	S = 0;
	int i = 1;
	while (i <= n) {
		if (n % i == 0 && i%2==0) {
			S += i;
		}
		i++;
	}
	return S;
}
int Bai27(int n, int& S) {
	S = 0;
	int i = 1;
	while (i <= n) {
		if (n % i == 0 && i % 2 != 0) {
			S += i;
		}
		i++;
	}
	return S;
}
int Bai28(int n, int& S) {
	S = 0;
	int i = 1;
	while (i < n) {
		if (n % i == 0) {
			S += i;
		}
		i++;
	}
	return S;
}
void Bai29(int n) {
	int i = 1,max = 1;
	while (i < n) {
		if (n % i == 0 && i%2!=0) {
			if (i > max) {
				max = i;
			}
		}
		i++;
	}
	cout << "Uoc so le lon nhat la " << max << endl;
}
int Bai30(int n, int &S) {
	S = 0;
	int i = 1;
	while (i < n) {
		if (n % i == 0) {
			S += i;
		}
	i++;
	}
	return S;
}
int Bai31(int n){
	if (n <= 1) 
		return false;
	int i = 2;
	while (i <= sqrt(n)) {
		if (n % i == 0) 
			return false;
		i++;
	}
	return true;
}
int Bai32(int n) {
	if (n < 0) return false;
	int SCP = sqrt(n);
	return SCP * SCP == n;
}