//LeetCode �ǲ߭p�e �j�����w �bhaystack ��� needle
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        // �n�ΰj��,��Ҧ��i�઺��m,����L�@��
        // ex. sadbutsad �����L �n��sad
        // i:0 sad ��haystack �ūe��N�Ӧr��
        //     sad
        // i:1  sad
        //      adb
        // i:2   sad ...
        //       dbu
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i <= H -N; i++){ // i�չL�Ҧ���m
            if( haystack.substr(i, N) == needle) return i;
            //�q1�}�l, �ťX N �Ӧr�� ���M�ۦP ��쵪��!!
        }
        return -1; // �S����쵪��, �n�^�� -1 �N����
    }
};
