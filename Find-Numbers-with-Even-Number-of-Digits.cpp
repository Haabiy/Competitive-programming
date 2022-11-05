class Solution {
public:
    int counteven=0;
    int findNumbers(vector<int>& nums) {
     for(int i=0; i<nums.size(); i++){ 
        int count=0;
        while(nums[i]!=0){
            nums[i]/=10;
            count++;
        }
        if(count%2==0){
          cout<<count<<endl;
           counteven++;
        }
      }
    return counteven;
    }
};

