#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << 100 * (100 + 1)*1/2 << endl;
}
//割り算を最後にしないと正しい答にならない

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   cout << 1/2 * 100 * (100 + 1) << endl;
// }

// https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q1157929946
// 等差数列の和の公式を覚えると便利です。
// 公式の証明は省略します。
// 等差数列の和＝（初項＋終項）×項数×1/2
// 等差数列とは隣同士の数の差が等しい数の並びです。
// 初項とは最初の数、終項とは最後の数、項数とは数の個数のことです。

// （１）１から１００までの和
// １＋２＋３＋…＋１００は等差数列の和で、初項１、終項１００、項数１００
// １＋２＋３＋…＋１００＝（１＋１００）×１００×1/2＝５０５０
// （答）５０５０

