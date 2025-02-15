#include <unordered_set>

class MyHashSet {
private:
    std::unordered_set<int> hashTable;

public:
    MyHashSet() {}

    void add(int key) {
        hashTable.insert(key);
    }

    void remove(int key) {
        hashTable.erase(key);
    }

    bool contains(int key) {
        return hashTable.find(key) != hashTable.end();
    }
};
