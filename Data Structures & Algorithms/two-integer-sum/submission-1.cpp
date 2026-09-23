class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m; // key value
        for(int i=0;i<n;i++){
            int a = nums[i]; 
            int k = target-a;
            auto it = m.find(k); 

            if (it != m.end()) {
                if(i<m[k]){
                    return {i,m[k]};
                }
                return {m[k],i};
            }

            m[nums[i]] =i;
            
        }
        return {-1,-1};
        

    }
};
