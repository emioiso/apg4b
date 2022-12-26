#include <bits/stdc++.h>
using namespace std;

int	main()
{
	string	s;

	cin >> s;
	// cout << "sの文字列=" << s <<endl;//sの文字列
	// cout << "sの文字列の長さ=" << s.size() << endl;//文字列の長さ取得

	int box = 1;
	for(int i = 0; i < s.size(); i++){
		// cout << s.at(i) <<endl;
			if(s.at(i) == '+'){
				box++;
				// cout << "プラスされた" << box <<endl;
			} else if(s.at(i) == '-'){
				box--;
				// cout << "マイナスされた" << box <<endl;
			}
			// cout << "最終box値" << box <<endl;
	}
	cout << box <<endl;
}
