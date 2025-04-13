// Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2

// ⏳TC- O(n) || 🗃️SC = O(1)
class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int maxi=0;
            int count=0;
            if(nums.size()==1){
                if(nums[0]==1){
                    return 1;
                }else{
                    return 0;
                }
            }
            for(int it : nums){
                
                if(it == 1){
                    count++;
                    maxi=max(maxi,count);
                }else{
                    
                    count=0;
                }
            }
            return maxi;
        }
    };