///week04-1.cpp
/// �Ʋ� vector <int> a

#include <iostream>
#include <vector>
using namespace std;
int main()
{

        vector<int> a; ///�W�g�檺 ���Y�ۦp �����C
        cout << "�S����l��a�����׬O" << a.size() << endl; ///�@�}�l�j�p�O0
        a.push_back (99);
        cout <<  "�g�Lpush_back()��a��������" <<a.size() <<endl;

        vector<int> b(3); ///���Y�ۦp���}�C ���׬O3�̭�����0
        cout << "b�����׬O" << b.size() << endl;
        b.push_back(99);///�̫�A�[1��99
        for(int i=0; i<b.size();i++)cout << b[i]  << ' '; ///0 0 0 99
        cout << "�g�Lpush_back(99)��b�ܪ��F" <<endl;

        vector<int> c(3,88); /// ���Y�ۦp���}�C���׬O3�̭�����88
        for(int i=0;i<c.size();i++) cout <<c[i] << ' '; /// 88 88 88
        cout << "��l��(3,88)�N�|�O3��88" <<endl;

}
