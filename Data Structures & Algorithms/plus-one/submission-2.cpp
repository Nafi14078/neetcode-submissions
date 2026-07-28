class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        bool found = false;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
                found = true;
            } else {
                digits[i] = digits[i] + 1;
                found = false;

                return digits;
            }
        }
        if (found == true) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
