class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp; // pehle ek map create krli 

        for(int i=0;i<nums.size();i++){  // for loop chalaya 
            if(mp.find(target-nums[i])==mp.end()){ 
                // agar target -nums[i] mao mein nhi mila to usko map  mein daalo 
                mp[nums[i]]=i;
            }
            else{
                // agar (target-nums[i])  alredy map mein exist krta h to return
                // krdo unka diffence ka index or current number ka index  
                return{mp[target-nums[i]],i};
            }
        }
        // Return this if no solution is found (problem guarantees one solution)
        return {-1,-1};
    }
};
