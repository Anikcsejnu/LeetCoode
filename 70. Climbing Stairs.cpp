class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(46);
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2;i <= n;i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
};


// Go solution 

func climbStairs(n int) int {
    var dp [46]int
    
    dp[0] = 1
    dp[1] = 1
    
    for i := 2; i <= n;i++ {
        dp[i] = dp[i-1] + dp[i-2]
    }
    
    return dp[n]
}