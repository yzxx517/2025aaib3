///week03-5.cpp
///leetcode �Ǩt�p�e week9 1502. Can Make Arithmetic Progression From Sequence
///�Ʀr�Ѥp��j �O���O�۾F���t�@�ӼƦr
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); /// ��}�C�p��j�Ʀn
        int d = arr[1] - arr[0]; /// ��Ʈtd
        for(int i=1;i<arr.size(); i++){ ///�j��q�@�}�l �]���n��e�@��
            if(arr[i] - arr[i-1] != d) return false;
        } ///�p�G�ᶵ-�e�� ���Od����
        return true;
    }
};
