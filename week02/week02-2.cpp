///week02-2.cpp
///�n�� c++ ���r�� �ϹL��
#include <iostream> ///IO��y�~��
#include <string> ///�r��~��
using namespace std; ///�ϥΩR�W�Ŷ� std
int main(){
    cout << "�п�J�Ʀr: ";
    string a, ans; /// c++ ���r��
    cin >> a; ///Ū�J�r��
    ///�˹L�Ӫ��j��
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i]; /// ��r���˹L��, ��J����
    }
    count << a << ans;
}
