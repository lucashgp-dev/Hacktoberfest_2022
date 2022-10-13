class Solution {
public:
    int mod = 1000*1000*1000+7;
    int dp[3001][1001];
    
    int dfs(int i, int k, int endPos) {
        if(k==0) return (i==endPos ? 1 : 0);
        if(dp[i+1000][k]!=-1) return dp[i+1000][k];
        return dp[i+1000][k] = (dfs(i-1,k-1,endPos)+dfs(i+1,k-1,endPos)) % mod;
    }
    
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp,-1,sizeof(dp));
        return dfs(startPos,k,endPos);
    }
};
