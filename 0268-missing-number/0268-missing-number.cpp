class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        int ele_sum=0;
        for(int i=0;i<n;i++){
            ele_sum = ele_sum+nums[i];
        }
        return (sum-ele_sum);
        
    }
};