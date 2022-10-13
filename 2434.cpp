class Solution {
public:
    
    char lowest(vector<int> &cnt) {
        for(int i=0; i<26; i++) if(cnt[i]) return 'a'+i;
        return 'a';
    }
    
    string robotWithString(string s) {
        stack<char> t;
        string ans;
        vector<int> cnt(26,0);
        for(char c : s) cnt[c-'a']++;
        for(char c : s) {
            t.push(c);
            cnt[c-'a']--;
            while(!t.empty() and t.top()<=lowest(cnt)) {
                ans+=t.top();
                t.pop();
            }
        }
        while(!t.empty()) ans+=t.top(),t.pop();
        return ans;
    }
};
