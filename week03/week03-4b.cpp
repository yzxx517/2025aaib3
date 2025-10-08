///week03-4b .cpp
///leetcode283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; // nums[k++] = nums[i] £½³oºØ¼gªk
        for(int i=0; i<nums.size();i++){
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size();i++){
            nums[i] = 0;
        }
    }
};
