///week05-3b.cpp
///Part3: stringstream �_�r
///CPE �o�����ĤG�DUVA 483 Word Scramble ��ۧˤ�
#include <iostream>
#include <sstream> ///Part3: ��r�Ψ��_�r
#include <string>
#include <algorithm> /// Part4: �ϹL��, �n�Ψ�algorithm �t��k
using namespace std;
int main(){
    string line; /// Part 1 : Input
    while ( getline(cin, line)){ ///Ū�J1��
    ///Ū�J1�� �@��Ū, Ū��Ctrl-z�~����
        stringstream ss(line); /// Part 3 :��r��Ψ��_�r
        string word; ///�Ψ��_�r
        while( ss >> word ){ /// Part3: ��r��Ψ��_�r
            reverse(word.begin(), word.end()); ///Part4:�ϹL��
            cout << " " << word;
        }
        cout << endl; ///����
        /// Part2: Output
        ///cout << line << endl; ///���H�K�L�X��
    }
}
