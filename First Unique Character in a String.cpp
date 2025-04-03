class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char,int>m;
            unordered_map<char,int>m2;
            for(int i=0;i<s.size();i++){
                m[s[i]]++;
                m2[s[i]]=i;
            }
    
            for(int i=0;i<s.size();i++){
                if(m[s[i]]==1){
                    return m2[s[i]];
                    
                }
            }
            return -1;
        }
        
    };