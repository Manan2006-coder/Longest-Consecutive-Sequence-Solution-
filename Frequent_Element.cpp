class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<int>v;
            map<int,int>m;
            multimap<int,int,greater<int>>n;
            for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
            }
    
            for(auto i:m){
                n.insert(make_pair(i.second,i.first));
                
            }
    
            for(auto e:n){
                if(k>0){
               v.push_back(e.second);
               k--;}
            }
            return v;
        }
       
    };