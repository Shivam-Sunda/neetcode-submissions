class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hashSet;

        for(int i=0; i<n; i++){
            if(hashSet[nums[i]]==0){
                hashSet[nums[i]]++;
                continue;
            }
            else return true;
        }

        return false;
    }
};