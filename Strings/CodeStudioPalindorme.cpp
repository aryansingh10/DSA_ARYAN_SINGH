#include <bits/stdc++.h> 

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isAlphanumeric(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

bool checkPalindrome(std::string s) {
    int st = 0;
    int e = s.length() - 1;
    while (st < e) {
        while (st < e && !isAlphanumeric(s[st])) {
            st++;
        }
        while (st < e && !isAlphanumeric(s[e])) {
            e--;
        }
        if (toLowerCase(s[st]) != toLowerCase(s[e])) {
            return false;
        }
        st++;
        e--;
    }
    return true;
}
