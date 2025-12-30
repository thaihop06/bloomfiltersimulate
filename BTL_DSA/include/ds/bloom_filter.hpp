#ifndef BLOOM_FILTER_H
#define BLOOM_FILTER_H

#include <vector>

class BloomFilter {
private:
    int m;                  // kích thước bit array
    int k;                  // số hàm băm
    std::vector<bool> bits; // bit array

    int hash1(int id) const;
    int hash2(int id) const;

public:
    BloomFilter(int m, int k);

    void add(int id);
    bool possiblyContains(int id) const;
};

#endif
