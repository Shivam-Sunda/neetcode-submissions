class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> hashSet;

        for(int i=0; i<n; i++){
            hashSet[nums[i]]++;
        }

        int maxx = 0;
        int ans;
        for(auto pair:hashSet){
            if(pair.second>maxx){
                maxx = pair.second;
                ans = pair.first;
            }
        }

        return ans;
    }
};