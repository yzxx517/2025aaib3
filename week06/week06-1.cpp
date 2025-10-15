//week06-1.cpp
//LeetCode �ǲ߭p�e��4�D 242. Valid Anagram
//���A2�Ӧr�� s, t �ЧP�_�L�̥Ϊ��r��,�O�_���ۦP(�i������)
class Solution {
public:
    bool isAnagram(string s, string t) {
     //���ݦr�ꪺ���׬O�_�ۦP
     if( s.length() != t.length() ) return false; //���P,�N��������

     //����r�� s ���r��,�ֿn�@�U
     int R[26] = {}; //�n���@��Recycle�^����,�Ӥ�����ڭ̪��r��
     for(int i=0; i<s.length(); i++){
        char c = s[i] - 'a'; //���ӬO�p�g�r��,���n�ܦ�0-25�ҥH�n��'a'
        R[c]++;
     }
     //�A����ֿn���r��, ��t�Ψ쨺�� ���� ��n�Χ�(����ζW�L)
     for(int i=0; i<t.length();i++){
        char c = t[i] - 'a';
        R[c]--; //�α��L
        if(R[c]<0) return false; //������,�N����
     }
     return true;
    }
};
