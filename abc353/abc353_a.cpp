#include <bits/stdc++.h>
using namespace std;

using 整数 = int;
using 何もない = void;
using 真偽 = bool;
#define 真 true
#define 偽 false
#define 終括弧 )
#define 括弧 (
#define 主 main
#define 終中括弧 }
#define 中括弧 {
#define 終四角括弧 ]
#define 四角括弧 [
#define 繰り返す for
using 整数配列 = vector<int>;
#define 一 1
#define 零 0
#define もし if
#define 返す return
#define 負 -
#define 小なり <
#define 大なり >
#define 足す +
#define 減らす -
#define 代入 =
#define 足す足す ++

整数 整数を受け取る()
{
    整数 tmp;
    cin >> tmp;
    return tmp;
}

何もない 改行()
中括弧
    cout << endl;
終中括弧

何もない 整数を出力する 括弧 整数 出力するもの 終括弧
中括弧
    cout << 出力するもの;
終中括弧

整数 主 括弧 何もない 終括弧 
中括弧
    整数 ビルの数;
    ビルの数 代入 整数を受け取る 括弧 終括弧;
    整数配列 ビルの高さ 括弧 ビルの数 終括弧;
    繰り返す 括弧 整数 何番目 代入 零; 何番目 小なり ビルの数; 何番目 足す足す 終括弧
    中括弧
        ビルの高さ 四角括弧 何番目 終四角括弧 代入 整数を受け取る 括弧 終括弧;
    終中括弧
    繰り返す 括弧 整数 何番目 代入 一; 何番目 小なり ビルの数; 何番目 足す足す 終括弧
    中括弧
        もし 括弧 ビルの高さ 四角括弧 零 終四角括弧 小なり ビルの高さ 四角括弧 何番目 終四角括弧 終括弧
        中括弧
            整数を出力する 括弧 何番目 足す 一 終括弧;
            改行 括弧 終括弧;
            返す 零;
        終中括弧
    終中括弧
    整数を出力する 括弧 負 一 終括弧;
    改行 括弧 終括弧;
終中括弧