class Solution {
public:
    bool isHappy(int n) {
        vector<int>v;
        while(n!=1){
            int sum=0;
            while(n!=0){
            int a=n%10;
            sum=sum+a*a;
            n=n/10;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==sum){
                return false;
                break;
            }
        }
        n=sum;
        v.push_back(n);
        }
        return true;
    }
};
