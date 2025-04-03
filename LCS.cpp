class Solution {
    public:
       int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int longest=1;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int ct=1;
                int x= it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    ct=ct+1;
                }
                longest = max(longest,ct);
            }
        }
        return longest;
    }
    };
       