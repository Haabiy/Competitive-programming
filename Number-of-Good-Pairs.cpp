class Solution {
public:
    int counter=0;
    int numIdenticalPairs(vector<int>& nums) {
     for(int i=0; i<nums.size(); i++){
         for(int j=i; j<nums.size(); j++){
         if(nums[i]==nums[j] && i<j){
             counter = counter +1;
         }
     }
    }
        return counter;
    }
};