///week05-3b.cpp
///Part3: stringstream 斷字
///CPE 這次的第二題UVA 483 Word Scramble 把自弄反
#include <iostream>
#include <sstream> ///Part3: 把字用來斷字
#include <string>
#include <algorithm> /// Part4: 反過來, 要用到algorithm 演算法
using namespace std;
int main(){
    string line; /// Part 1 : Input
    while ( getline(cin, line)){ ///讀入1行
    ///讀入1行 一直讀, 讀到Ctrl-z才結束
        stringstream ss(line); /// Part 3 :把字串用來斷字
        string word; ///用來斷字
        while( ss >> word ){ /// Part3: 把字踹用來斷字
            reverse(word.begin(), word.end()); ///Part4:反過來
            cout << " " << word;
        }
        cout << endl; ///跳行
        /// Part2: Output
        ///cout << line << endl; ///先隨便印出來
    }
}
