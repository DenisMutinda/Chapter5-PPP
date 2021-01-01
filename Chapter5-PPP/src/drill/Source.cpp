#include "../std_lib_facilities.h"

int main()
try {
	// 01. Cout << "Success!\n";
	//cout << "01. Success!\n";

	// 02.  cout << "Success!\n;
	//cout << "02. Success!\n";

	// 03. cout << "Success" << !\n"
	//cout << "03. Success" << "!\n";

	// 04. cout << success << '\n';
	//cout << "04. success" << '\n';

	/*
	// 05. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	int res = 7;
	vector<int> v(10);
	v[5] = res;
	cout << "05. Success!\n";
	*/

	/*
	//06. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
	vector<int> v(10);
	v[5] = 7;
	if (v[5] == 7) cout << "06. Success!\n";
	*/

	/*
	* //  if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	* if (0 == 0) cout << "07. Success!\n"; else cout << "Fail!\n";
	*/

	/*
	* // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
	* bool c = true; if (c) cout << "08. Success!\n"; else cout << "Fail!\n";
	*/

	/*
	* //  string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
	* string s = "ape";
	* bool c = "fool" > s;
	* if (c) cout << "09. Success!\n";
	*/

	/*
	*  // string s = "ape"; if (s=="fool") cout << "Success!\n";
	* string s = "ape"; if (s != "fool") cout << "10. Success!\n";
	*/

	/*
	* // string s = "ape"; if (s=="fool") cout < "Success!\n";
	* string s = "ape"; if (s != "fool") cout << "11. Success!\n";
	*/

	/*
	* // string s = "ape"; if (s+"fool") cout < "Success!\n";
	* string s = "ape"; if (s != "fool") cout << "12. Success!\n";
	*/

	/*
	* // vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
	* vector<char> v(5); for (int i = 0; i < v.size(); ++i); cout << "13. Success!\n";
	*/

	/*
	* // vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	* vector<char> v(5); for (int i = 0; i < v.size(); ++i); cout << "14. Success!\n";
	*/

	/*
	* // string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
	* string s = "15. Success!\n"; for (int i = 0; i < s.size(); ++i) cout << s[i];
	*/

	/*
	* // if (true) then cout << "Success!\n"; else cout << "Fail!\n";
	* if (true) cout << "16. Success!\n"; else cout << "Fail!\n";
	*/

	/*
	* // int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
	* int x = 2000; char c = x; if (c != 2000) cout << "17. Success!\n";
	*/

	/*
	* // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
	*
	string s = "18. Success!\n";
	for (int i = 0; i < s.size(); ++i) cout << s[i];
	*/

	/*
	* // vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	*
	vector<int> v(5);
	for (int i = 0; i < v.size(); ++i); cout << "19. Success!\n";
	*/

	/*
	* //  int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
	*
	int i = 0; int j = 9;
	while (j < 10) ++j;
	if (i < j) cout << "20. Success!\n";
	*/

	/*
	* // int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
	*
	int x = 2; double d = 5.0 / x--; // First do (5.0/2)==2.5 . Then decrement x to 1.
	if (d == 2 * x + 0.5) cout << "21. Success!\n";
	*/

	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}