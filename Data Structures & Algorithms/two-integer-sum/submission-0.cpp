class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> hashSet;

        for(int i=0; i<n; i++){
            int diff = target - nums[i];
            if(hashSet.find(diff) != 0){
                return {hashSet[target-nums[i]], i};
            }
            else{
                hashSet[nums[i]] = i;
            }
        }

        return {0, 0};
    }
};
