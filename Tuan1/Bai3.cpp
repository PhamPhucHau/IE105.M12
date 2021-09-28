#include<iostream>
using namespace std;
#include<string>
string Decrypt_ROT13(string s)
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
			c = ((((int)s[i]) - 97 + 13) % 26) + 97;
		}
		else

		c = ((((int)s[i]) - 65 + 13) % 26) + 65;
		res.push_back(c);
	}
	return res;
}

int main()
{
	string s;
	cout << " Nhap plaintext \n";
	getline(cin, s);
	string res;
	fflush(stdin);//ROT13(ROT13(x)) = x cho nen chi can mot ham ROT13 la co the dam bao nhiem vu ma hoa va giai ma 
	//Do kho kha de nen chi can 1 lan.
	while (1)
	{
		cout << " ==============Menu===================\n1. Giai ma plaintex bang ROT13\n 2. Ma hoa plaintex bang ROT13\n3. Thoat";
		int t;
		cin >> t;
		cout << "\NMoi ban lua chon:\n";
		switch (t)
		{
		case 1: {
			cout << "Giai ma plaintex bang ROT13\n";
			cout << Decrypt_ROT13(s);
			break;
		}
		case 2: {
			cout << "\nMa hoa plaintex bang ROT13\n";
			cout << Decrypt_ROT13(s);
		}
		case 3:
		{
			exit(0);
		}
		{
		default:
			break;
		}
		}

	}

	return 0;
}