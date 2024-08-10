#include <iostream>
#include <vector>

int processArray(std::vector<int> &arr) {
    int x = 0;
    int i = 0;
    
    while (i < arr.size()) {
        if (arr[i] % 3 == 0) {
            int sum = 0;
            while (i < arr.size() && arr[i] % 3 == 0) {
                sum += arr[i];
                i++;
            }
            arr[x++] = sum;
        } else {
            arr[x++] = arr[i++];
        }
    }
    
    arr.resize(x);
    
    return x;
}

int main(void) {
    std::vector<int> arr;
    int val;
    while (std::cin >> val) {
        if (val < 0) break;
        arr.push_back(val);
    }
    int new_len = processArray(arr);
    for (int i = 0; i < new_len; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
