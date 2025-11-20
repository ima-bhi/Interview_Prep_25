class Solution {
public:
    bool isPalindrome(string s) {
        // intialize left and right pointer
        int left = 0, right = s.length() - 1;
        while (left < right) {
            /*
            isalnum(ch) returns:
            true (non-zero) → if ch is a letter (A–Z, a–z) or a digit (0–9)
            false (0) → otherwise
            */
            if (!isalnum(s[left]))
                left++;
            else if (!isalnum(s[right]))
                right--;
            else if (tolower(s[left]) != tolower(s[right]))
                return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};