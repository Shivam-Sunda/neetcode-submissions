class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<unordered_map<char, int>> hashSet(n);
        vector<int> aa(n, 0);

        for(int i=0; i<n; i++){
            for(int j=0; j<strs[i].length(); j++){
                char x = strs[i][j];
                hashSet[i][x]++;
            }
        }

        vector<vector<string>> ans;

        for(int i=0; i<n; i++){
            if(aa[i] == 1) continue;
            aa[i] = 1;
            vector<string> temp;
            temp.push_back(strs[i]);
            for(int j=0; j<n; j++){
                if(hashSet[i] == hashSet[j] && aa[j] != 1){
                    temp.push_back(strs[j]);
                    aa[j] = 1;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
