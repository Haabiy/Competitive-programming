class Solution {
public:
    vector<int>answer;
    vector<int> decompressRLElist(vector<int>& nums) {
       for(int i=0; i<nums.size(); i+=2){ 
           for(int j=0; j<nums[i]; j++){
               
               answer.push_back(nums[i+1]);    
           }
       } 
     return answer;   
    }
};