class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int posIndex=0; //assiging positive index from starting position
        int negIndex=1; //assiging negative index from 0+1 position
        for(int num:nums){
            if(num>0){
                result[posIndex]=num; 
                posIndex+=2; // increment posindex by from where every new element is added in the result
            }
            else{
                result[negIndex]=num; // increment negindex by from where every new element is added in the result
                negIndex+=2;
            }
        }
        return result;
    }
};