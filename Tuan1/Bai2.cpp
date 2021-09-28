#include<iostream>
using namespace std;
#include<string>
string Decoder_Caesar(string s, int j)
{
	string res;
	for (int i = 0;i < s.size();i++)
	{
		if (s[i] == ' ')
		{
			res.push_back(s[i]);
			continue;
		}
		char c;
		if (((int)s[i]) >= 97 && ((int)s[i]) <= 122)
		{
			c = ((((int)s[i]) - 97 + j) % 26) + 97;
		}
		else

			c = ((((int)s[i]) - 65 + j) % 26) + 65;
		res.push_back(c);
	}
	return res;
}
void Brute_Force_Caesar(string s)
{
	for (int j = 1;j < 26;j++)
	{
		cout << "\nUng voi do dich chuyen(shift pattern): " << j << "\nKet qua la: ";
		cout << Decoder_Caesar(s, j);
		cout << endl;
	}
}
int main()
{
	string s;
	cout << " Nhap plaintext \n";
	getline(cin, s);
	cout << "\n=====================Menu============================\n 1. Giai ma biet truoc do dich chuyen(shift pattern)\n 2. Giai ma bang Brute Force Attack\n";
	int t;
	cin >> t;
	string res;
	fflush(stdin);
	if (t == 1)
	{
		int j;
		cout << " Nhap do dich chuyen(shift pattern)\n";
		cin >> j;
		cout << Decoder_Caesar(s, j);
	}
	else
	{
		if (t == 2)
		{
			cout << "\nBrute Force Attack decrypto Caesar:\n ";
			Brute_Force_Caesar(s);
		}
		else
		{
			cout << " Lua chon khong hop le";
			exit(0);
		}
	}
	
	return 0;
}