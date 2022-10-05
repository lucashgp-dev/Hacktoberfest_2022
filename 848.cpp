class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int sum = 0;
        int add = (1e9+25)/26; add=add*26;
        for(int x : shifts) sum=(sum+x) % 26;
        for(int i=0; i<s.size(); i++) {
            s[i] = 'a'+(s[i]-'a'+sum) % 26;
            sum = (sum-shifts[i]+add) % 26;
        }
        return s;
    }
};
