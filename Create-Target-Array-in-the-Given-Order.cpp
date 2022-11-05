class Solution {
public:
    vector<int>ans;
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        //nums.pop_back();
        //index.pop_back();
        for(int i=0; i<nums.size(); i++){
              ans.insert(ans.begin()+index[i], nums[i]);
        }
    return ans;
    }   
};