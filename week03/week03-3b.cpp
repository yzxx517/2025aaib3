///week03-3b.cpp �G�X�@
///leetcode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {

        int ans = 1;///i���W����� �N��M�ܦ������
        ///����g int ans=0; �]��0���W����Ƴ��O0
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
        } ///�Ƥl�V�j �z���F �u�୼�H

        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
