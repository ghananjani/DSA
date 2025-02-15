class MyHashMap {
private:
    std::vector<int> hashMap;  // Storage for key-value pairs

public:
    MyHashMap() {
        hashMap.resize(1e6 + 1, -1);  // Initialize with -1 to indicate empty slots
    }

    void put(int key, int value) {
        hashMap[key] = value;
    }

    int get(int key) {
        return hashMap[key];
    }

    void remove(int key) {
        hashMap[key] = -1;  // Reset value to indicate removal
    }
};
