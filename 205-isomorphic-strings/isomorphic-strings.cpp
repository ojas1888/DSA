class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int freq1[256]={0};
        int freq2[256]={0};
        for(int i=0;i<s.length();i++){
            if(freq1[s[i]]==0 && freq2[t[i]]==0){
                freq1[s[i]]=t[i];
                freq2[t[i]]=s[i];
            }
            else if(freq1[s[i]]!=0){
                int a=freq1[s[i]];
                if(a!=t[i]){
                    return false;
                }
            }
            else if(freq2[t[i]]!=0){
                return false;
            }
        }
        return true;
    }
};