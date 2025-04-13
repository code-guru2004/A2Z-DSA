// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

// Method-1
// ⏳TC- O(n) || 🗃️SC = O(n)
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            // B[i] = A[(i+k)%n]
            vector<int>result(n);
            for(int i=0 ;i<n;i++){
                result[(i+k)%n] = nums[i];
            }
    
            for(int i=0;i<n;i++){
                nums[i] = result[i]
            }
        }
};
