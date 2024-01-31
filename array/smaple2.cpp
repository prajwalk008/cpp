class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=sizeof(nums);
        int element{0};
        for(int i{0};i<n;++i){
            int element=nums[i];
            int ele_count{1};
            for(int j{i+1};j<n;++j){
                if(element==nums[j]){
                    ele_count+=1;
                    nums[j]=INT_MIN;
                } else{
                    continue;
                }
            }
            if(ele_count>=((n+1)/2)){
                return element;
            } else{
                continue;
            }
        } 
    } 
};