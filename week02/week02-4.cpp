//week02-4.cpp LeetCode�ǲ߭p�e��2�D
//389. Find the Difference ���2�Ӧr�� �t���Ӧr��
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; //�i�H�α�l�Ӹ˦r��, �j�A��,�N�� �@�}�l�Ū�
        for(int i=0; i<s.length(); i++){ //�r�ꪺ for �j��
            char c = s[i]; //���X�r��
            A[c]++; //��r��,��J��l��
        }
        for(int i=0; i<t.length(); i++){ //�r�ꪺ for �j��
            char c = t[i]; //���X�r��
            A[c]--; //�q��l��, ���X�r��
            if(A[c] < 0) return c; //������ �ܭt�� �N������ �ʥ�
        }
        return 0; // ���|�Ψ�o�@���
    }
};
