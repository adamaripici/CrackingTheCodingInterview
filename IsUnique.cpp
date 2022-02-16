#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//1.1) Implement an algorithms to determine if a string has all unique characters.
bool uniqueCharacters(string str)
{
  sort(str.begin(),str.end());
  for (int i = 0; i < str.length(); i ++) {
    if (str[i] == str[i+1]) {
      return false;
    } 
  }
  return true;
}
int main()
{
    string str = "This IS a string";
 
    if (uniqueCharacters(str)) {
        cout << "The String " << str
             << " has all unique characters\n";
    }
    else {
        cout << "The String " << str
             << " has duplicate characters\n";
    }
    return 0;
}
