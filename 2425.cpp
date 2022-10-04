class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int x : nums1) mp[x]++;
        int ans=0;
        for(auto &it : mp) {
            if((it.second*nums2.size())&1) ans=ans^it.first;
        }
        mp.clear();
        for(int x : nums2) mp[x]++;
        for(auto &it : mp) {
            if((it.second*nums1.size())&1) ans=ans^it.first;
        }
        return ans;
    }
};
