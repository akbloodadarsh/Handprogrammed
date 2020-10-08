#include "solution.hpp"
using namespace std;

class Set {
    public:
    bool sett[100001];
    Set() {
        memset(sett,0,sizeof(sett)); 
    }

    void add(int val) {
        sett[val%100001] = 1;
    }

    bool exists(int val) {
        return sett[val%100001];
    }

    void remove(int val) {
        sett[val%100001] = 0;
    }
};
