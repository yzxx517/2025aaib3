/// week02-2.cpp C++
/// �n�� C++ ���r�� �ϹL��
#include <iostream> /// IO��y�~��
#include <string> /// �r��~��
using namespace std; /// �ϥΩR�W�Ŷ� std
int main()
{
    cout << "�п�J�Ʀr: ";
    string a, ans; /// c++ ���r��
    cin >> a; ///Ū�J�r��
    ///�˹L�Ӫ��j�� �r�ꪺ���ץs a.length()
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i]; /// ��r���˹L��,��J����
    }
    cout << a << ans;
}
