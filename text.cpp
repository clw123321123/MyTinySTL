#include <iostream>
#include "vector.h"
#include "unordered_map.h"




int main() {
    mystl::vector<int> dit;
    mystl::unordered_map<int,int> res;

    for(int i = 0;i < 10;++i) {
        dit.push_back(i);
        res[i] = i;
    }
    std::cout << dit.size() << ' ' <<res.size() <<std::endl;
    return 0;
}