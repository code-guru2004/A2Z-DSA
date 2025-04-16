// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// Method-1 
// 💡Time Complexity: O(n^2) 
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n = nums.size();
            if(n == 1){
                return nums[0];
            }
            set<int>mp;
            set<pair<int,int>>st;
    
            for(int i=0;i<n;i++) {
                if(mp.find(nums[i]) != mp.end()) continue;
               
                int count=0;
                for(int j=0;j<n;j++){
                    if(nums[i] == nums[j]) count++;
                }
                mp.insert(nums[i]);
                st.insert({nums[i] , count});
            }
            int maxi = n/2;
            int ans;
            for(auto &it : st) {
                if(it.second > maxi){
    
                     ans=  it.first;
                }
            }
    
            return ans;
        }
    };

// Method-2
// 💡 Final Time Complexity:
// O(n) — linear time overall.
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n = nums.size();
            if(n == 1){
                return nums[0];
            }
            unordered_map<int,int>mp;
    
            for(int num : nums) {
               mp[num]++;
            }
            int maxi = n/2;
            int ans;
            for(auto &[key, value] : mp) {
                if( value > maxi){
    
                     ans =  key;
                }
            }
    
            return ans;
        }
    };