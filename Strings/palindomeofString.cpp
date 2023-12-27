#include <iostream>
using namespace std;
bool isPalindrome(char name[], int n) {
  int s = 0;
  int e = n - 1;
  while (s <= n) {
    if (name[s] != name[e]) {
      return 0;
    } else {
      s++;
      e--;
    }
  }
  return 1;
}

void getReverse(char name[], int n) {
  int s = 0;
  int end = n - 1;
  while (s <= end) {
    swap(name[s++], name[end--]);
  }
}
int getLEngthofString(char name[]) {
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  char name[20];
  cout << "Ente your name;";
  cin >> name;
  cout << "My name is" << name << endl;
  cout << "Length of string is";
  int length = getLEngthofString(name);
  getReverse(name, length);
  cout << "Reverse of string is" << name << endl;
  cout << "Palindrome or not =" << isPalindrome(name, length) << endl;

  return 0;
}