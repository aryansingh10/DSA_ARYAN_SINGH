class Solution {
public:
    bool isvalidchar(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    char toLowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool isPalindromestr(const string& name) {
        int s = 0;
        int e = name.size() - 1;
        while (s <= e) {
            if (name[s] != name[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    bool isPalindrome(string s) {
        string temp;
        for (int j = 0; j < s.size(); j++) {
            if (isvalidchar(s[j])) {
                temp.push_back(toLowerCase(s[j]));
            }
        }
        return isPalindromestr(temp);
    }
};