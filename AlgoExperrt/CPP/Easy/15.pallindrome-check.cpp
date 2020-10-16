// Approach 1- Concatation:

// new = ""
// new += string[n-1]
// n--

// return new==string

// Space - O(n)
// Time - O(n^2) , because new is also iterating itself in the loop.

using namespace std;
// O(n^2) time | O(n) space
bool isPalindrome(string str) {
 string reversedString = "";
 for (int i = str.length() - 1; i >= 0; i--) {
 reversedString += str[i];
 }
 return str == reversedString;
}



// Approach 2- Array/Vector:

// new = []
// new.append(string[n-1])
// n--

// string s(new)
// return s==string
// new.join => converts array into string in python

// Space - O(n)
// Time - O(n) 

#include <vector>
#include <numeric>
using namespace std;
// O(n) time | O(n) space
bool isPalindrome(string str) {
 vector<char> reversedChars;
 for (int i = str.length() - 1; i >= 0; i--) {
 reversedChars.push_back(str[i]);
 }
 return str == string(reversedChars.begin(), reversedChars.end());
}



// Approach 3- Recursion:

// return first==last && isPallindrome(mid);

// Space will be O(1)?, No that's not the case with recursion,because of call stacks it uses, => 0(n)
// It will be O(1), if it's a Tail Recursion(last line of the call), here there is no additional penalty.
// Time - O(n) 

using namespace std;
bool helper(string str, int i);
// O(n) time | O(n) space
bool isPalindrome(string str) { return helper(str, 0); }
bool helper(string str, int i) {
 int j = str.length() - 1 - i;
 return i >= j ? true : str[i] == str[j] && helper(str, i + 1);
}


// BEST WAY
// Approach 4- Pointers

// We can maintain 2 pointers l and r, which points to first and last character of a string initally, then we can compare l & r, if it's equal then increment,
// otherwise return false;

// Space - O(1)
// Time - O(n)

using namespace std;
// O(n) time | O(1) space
bool isPalindrome(string str) {
 int leftIdx = 0;
 int rightIdx = str.length() - 1;
 while (leftIdx < rightIdx) {
 if (str[leftIdx] != str[rightIdx]) {
 return false;
 }
 leftIdx++;
 rightIdx--;
 }
 return true;
}


