class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum =0;
        int maxi=nums[0];

        for(int i=0; i<nums.size(); i++){
            //steps no 1

            sum =sum +nums[i];//steps no 2
            maxi =max(maxi, sum);//steps 3

            if (sum <0)

            sum =0;
        }
        return maxi;
    }
};