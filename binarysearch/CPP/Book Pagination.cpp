/*The answer is seemingly easier in Python, but in C++, you must start your search from the
index page * page_size and iterate till you get a total pages of page_size (or) till the end of the list.*/
#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<string> solve(vector<string>& book, int page, int page_size) {
        int i = page*page_size,n = book.size(),pg = 0;
        vector<string>ans;
        while(i<n && page_size--)ans.emplace_back(book[i++]);
        return ans;
    }
};
