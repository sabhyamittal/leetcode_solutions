class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        if(s.length()!=t.length())return false;
        for(auto c:s)
        {
            count[c-'a']++;
        }
        for(auto c:t)
        {
            count[c-'a']--;
        }
        for(auto i:count)
        {
            if(i!=0)return false;
        }
        return true;
    }
};