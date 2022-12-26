// 【時間がかかったこと】
// 条件分岐①:がシングルクォーテーションで囲むのかダブルクォーテーションなのかが分からなかった。
// 条件分岐②boxに何を代入していいのかが分からなかった。
// でも初期値がAということが問題文に記載があったのでboxの初期値をAにしたらできた。
// cin
// cout
// 文字型の変数定義の方法が分からなかった。

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;//計算の数N
	int A;//最初の値A
	cin >> N >> A;
	// cout << N << A <<endl;

	string op;
	int b;
	int box = A;
	for(int i = 1; i <= N; i++){
		cin >> op >> b;
		// cout << op << b <<endl;

		if(op == "+"){
			// cout << i << ":" << A + b <<endl;
			box = box + b ;
			cout << i << ":" << box <<endl;
		} else if(op == "*"){
			box = box * b;
			cout << i << ":" << box <<endl;
		} else if(op == "-"){
			box = box - b;
			cout << i << ":" << box <<endl;
		} else if((op == "/") && (b == 0)){
			cout << "error" <<endl;
			break;
		} else if(op == "/"){
			box = box / b;
			cout << i << ":" << box <<endl;
		}
	}
}
