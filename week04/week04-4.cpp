///week04-4.cpp
//LeetCode �ǲ߭p�e 896. Monotonic Array
///�u�i�H�W�[ or �u���֪��}�C ���i�H�S�W�[�S���
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0; /// �p�G�W�[ up�ܦ�1 �p�G���down�K1
        for(int i=1;i<nums.size();i++){ /// �}�C�ﭫ1�}�l
            if( nums[i-1] < nums[i]) up = 1; /// ���p �S�j �W�[
            if( nums[i-1] > nums[i]) down = 1; ///  ���j �k�p ���
        }
        if (up==1 && down==1) return false; //�̫��ˬd �ץi�H�S�W�[�k���
        return true;


    }

};
