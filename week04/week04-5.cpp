///week04-5.cpp
///LeetCode 66. Plus One
///�q�k�������� ��L�Ӫ��j��
//1,9,9
//    0�]�����i�� �ҥH����O+1
//  0  �]�����i�� �ҥH����O+1
//2    �S���i�� �������״N���F
//1,2,3
//    4�S���i�� �������״N���F
//9,9,9
//1,0,0,0
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); ///�����D�}�C�H�K ��L�Ӫ��j��
        for(int i=N-1;i>=0;i--){
            if(digits[i] == 9 )digits[i]= 0; ///�i�� �ܦ�0 (�٨S��쵪��)
            else{ ///�S���i�� �N�O��쵪��
                digits[i]++; /// �E+1��S���i��
                return digits; ///��쵪�פF �e�X�h
            }
        }
        ///���S��쵪�� �]�N�O9,9,9 �@�ȶi�� �S����쵪�� �٭n�b�̫e����1
        digits.insert(digits.begin(),1); ///�}�l���a�� ���J1
        return digits;
    }
};
