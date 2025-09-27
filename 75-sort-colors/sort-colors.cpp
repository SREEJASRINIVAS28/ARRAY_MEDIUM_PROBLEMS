class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i=0;
        for(auto it:mp){
            int val=it.second;
            while(val>0){
                nums[i]=it.first;
                val--;
                i++;
            }
        }
    }
};