class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
             vector<int> v(2);
        for(int i=0;i<nums.size();i++){
            bool flag = true;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j]==target){
                    v[0]=i;
                    v[1]=j;
                    flag=false;
                    break;
                }
            }if(flag==false) break;
        }return v;
    }
};