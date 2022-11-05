class Solution {
public:
    int max=0;
    vector<bool>decide;
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        for( int i=0; i<candies.size(); i++){
          if(candies[i]>max){
              max=candies[i];
          }
        }
        for(int j=0; j<candies.size(); j++){
            int check=candies[j] + extraCandies;
            if(check>=max){
                decide.push_back(true);
            }
            else{
                decide.push_back(false);
            }
        }
        
        return decide;
    }
};