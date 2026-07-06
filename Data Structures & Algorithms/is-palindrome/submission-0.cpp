class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v1;
        vector<char>v2;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9')){
                v1.push_back(tolower(s[i]));
            }
            else{
                continue;
            }
        }
        v2=v1;
        reverse(v2.begin(),v2.end());
        if(v1==v2){
            return true;
        }
        else{
            return false;
        }
        
    }
};
