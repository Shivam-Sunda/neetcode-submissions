class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> hashSetS;
        unordered_map<char, int> hashSetT;

        for(char x:s){
            hashSetS[x]++;
        }
        for(char x:t){
            hashSetT[x]++;
        }

        if(hashSetS==hashSetT) return true;
        return false;
    }
};
