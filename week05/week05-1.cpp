///week05-1.cpp
///Leetcode �ǲ߭p�e Built-In Fuctions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// ��r�� string �� iostream ��cin�ӥ�
        string word; /// �r��
        ///ss >> word; // ���O cin >> word �̼�, �{�b�� ss �i�H�� ss >>word
        ///ss >> word
        while(ss >> word){ /// �@��Ū,�W�줣��Ū����
            ///�̭��ƻ򳣨S����
        }
        cout << word; /// �����@�ӹ���,�ݿW�����

        return word.length(); ///�H�K�g����
    }
};
