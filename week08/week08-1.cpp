//week08-1.cpp LeetCode �D���D
//3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0; //��1�B ���έ�֪k ���n�O �G�i�� ���X���
        while (n>0) {
            n = n / 2; //�鱼�@�h��
            N++; //�h�F1�Ӧ��(�G�i�쪺���)
        }
        cout << "�{�b�o�{ n �O�X��ƩO?" << N << "���\n";
        int ans = 0; //��2�B, �A�ΰj��,�զX�X �����O1���G�i�쪺N���
        for (int i=0; i<N; i++){
            ans = ans * 2 + 1;
        }
        return ans;
    }
};
