//week07-3.cpp Leetcode �ǲ߭p�e Simulation �a1�D
//682. Baseball Game �p���I��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; //Part04 : �n���Ʃ��}�Ca�̭�
        for (string op : operations){ // Part01: C++ �i���j��
            cout << "�{�bŪ��F: " << op << "\n"; //Part02: �ݥL�O��,���@�U�R��
            //Part03: �@�� if �P�_�n������
            if(op[0]=='C'){ // �M���̫�@��
                a.pop_back(); // �ᱼ�̫�@��
            }else if(op[0]=='D'){ //�̫�@��u��2���v�A�u�a�D�̫᭱�v
                a.push_back(a.back() * 2) ;//��2�� Part06: back()
            }else if(op[0]=='+'){ //�٤����D���@�U��
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp + temp2);
                //��̫��ӥ[�_��,�A�u�[��̫᭱�v
            }else{ // �Ʀr���r���y�A�n�u�ճ̫᭱�v
                a.push_back( stoi(op)); //Part04: ,push_back
            }
        }
        int ans = 0;
        for(int now : a){ // Part05: C++ �ʯŰj�� �n�ݰ}�C����
            ans += now; //cout << now << " "; // Part02: �ݥL�O�֡A���@�U�R����(�ݰ}�C�̪���)
        }
        // ���H�K return ���@�U�A�g�@�M����
        return ans;
    }
};
