#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	string op;
	cin >> A >> op >> B;

	if (op == "+") {
		cout << A + B << endl;
	} else if (op == "-") {
		cout << A - B << endl;
	} else if (op == "*") {
		cout << A * B << endl;
	} else if (op == "/" && B == 0) { //ここと
		cout << "error" << endl;
	} else if (op == "/") {           //ここの順番を入れ替えたらACした
		cout << A / B << endl;
	} else {
		cout << "error" << endl;
	}
}

// 解説AC
#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
	int A, B;
	string op;
	cin >> A >> op >> B;

	if (op == "+") {
	cout << A + B << endl;
	} else if (op == "-") {
	cout << A - B << endl;
	} else if (op == "*") {
	cout << A * B << endl;
	} else if (op == "/" && B != 0) {
	cout << A / B << endl;
	} else {
	cout << "error" << endl;
	}
}
