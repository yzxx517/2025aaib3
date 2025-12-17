// week15-3.cpp  學習計畫 Basic 第5題，超棒，很難想到解法
// LeetCode 459. Repeated Substring Pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        // 解法很簡單（但很難想到），把 s + s 的頭、尾各刪 1 個字
        // 再找找看 裡面有沒有 s 本身

        string s2 = s + s;   // 兩倍的長度
        string s3 = s2.substr(1, s2.length() - 2);  // substr() 子字串，去掉頭尾

        return s3.find(s) != string::npos;
    }

    // 老師其實會出這一題，因為用到很多進階的觀念、技巧、函式
};
