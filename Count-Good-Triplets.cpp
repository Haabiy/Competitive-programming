class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int counter = 0;
        for(int i=0; i<arr.size()-2; i++){
            
            for(int j=i+1; j<arr.size()-1; j++){
                
                for (int k=j+1; k<arr.size(); k++){
                    int x=arr[i] - arr[j];
                    int y=arr[j] - arr[k];
                    int z=arr[i] - arr[k];
                    if(abs(x)<=a && abs(y)<=b && abs(z)<=c){
                        counter= counter +1;
                    }
                }
            }
        }
        
        return counter;
    }
};