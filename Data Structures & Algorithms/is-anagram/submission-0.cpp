class Solution {
   public:
    bool isAnagram(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;
        for (int i = 0; i < s.size(); i++) {
            m1[s[i]]++;
        }
        for (auto it : m1) {
            cout << it.first << ' ' << it.second << endl;
        }
        for (int i = 0; i < t.size(); i++) {
            m2[t[i]]++;
        }
        for (auto it : m2) {
            cout << it.first << ' ' << it.second << endl;
        }
        if (m1 == m2) {
            return true;
        } else {
            return false;
        }
    }
};
