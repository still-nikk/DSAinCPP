#include <iostream>
#include <vector>

int processArray(std::vector<int> &array) {
    int lastOdd = 0;
    for (int i = array.size() - 1; i >= 0; --i) {
        if (array[i] % 2 != 0) {
            lastOdd = array[i];
            break;
        }
    }
    return lastOdd;
}

int main(void) {
    std::vector<int> array;
    int val;
    while (std::cin >> val) {
        if (val < 0) break;
        array.push_back(val);
    }
    std::cout << processArray(array) << std::endl;
    return 0;
}
