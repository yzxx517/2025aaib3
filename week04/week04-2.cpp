///week04-2.cpp
///��h vector<int> a ���X��l�� (�̭��n��ƻ��)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(3); ///��l������3 �̭�����0
    vector<int> b(3,88);///��l������3 �̭�����88

    int c[10] = {1,2,3,9,8,7,4,5,7}; ///c�y�����}�C�ŧi ��l��

    vector<int> d(c,c+3);///�q���̶}�l ����̵��� �}�Cc�}�l �A��3������
    for(int i=0;i<d.size();i++)cout << d[i] << " ";
    cout << "�o�Oc�y�����}�C���U ���U c++�}�C����l�Ƥ@���\n\n";

    vector<int> e(c,c+10);///�q���̶}�l ����̵��� �}�Cc�}�l �A��10�浲��
    for(int i=0;i<e.size();i++)cout <<e[i] << " ";
    cout << "�o�]�Oc�y�����}�C���U ���U c++�}�C����l�Ƥ@���\n\n";

}
