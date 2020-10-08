#include "solution.hpp"
using namespace std;

class HashTable {
    public:
    int m[100001];
    HashTable() {
        for(int i=0;i<100001;++i)m[i] = -1;
    }

    void put(int key, int val) {
        m[key%100001] = val;
    }

    int get(int key) {
        return m[key%100001];
    }

    void remove(int key) {
        m[key%100001] = -1;
    }
};
