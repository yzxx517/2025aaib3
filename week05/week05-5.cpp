//week05-5.cpp
//LeetCode �ǲ߭p�e Built-In Functions ��2�D 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length();i++){
            s[i] = tolower( s[i] );
        }
        return s;
    }
};
