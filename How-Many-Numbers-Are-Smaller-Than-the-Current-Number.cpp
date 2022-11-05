class Solution {
public:
    int counter;
    vector<int>answer;
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    
        for(int i=0; i<nums.size(); i++){
            counter=0;
            for(int j=0; j<nums.size(); j++){
                
                if(nums[i]>nums[j] && j!=i)
                { 
                    counter=counter+1;
                } 
        }
             answer.push_back(counter);
        }
    return answer;
    }
    };