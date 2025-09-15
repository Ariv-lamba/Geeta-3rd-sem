#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    long long totalProduct = 1;
    int zeroCount = 0;

    for(int x : arr) {
        if(x == 0) zeroCount++;
        else totalProduct *= x;
    }

    vector<int> res(n, 0);

    if(zeroCount > 1) return res; // all zeros

    for(int i = 0; i < n; i++) {
        if(zeroCount == 0) {
            res[i] = totalProduct / arr[i];
        } else if(zeroCount == 1 && arr[i] == 0) {
            res[i] = totalProduct;
        } // else remains 0
    }

    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> res = productExceptSelf(arr);

    for(int x : res) cout << x << " "; // 24 12 8 6
}



/*

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n, 1), suffix(n, 1), res(n);

    // prefix[i] = product of all left elements
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * arr[i-1];
    }

    // suffix[i] = product of all right elements
    for(int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * arr[i+1];
    }

    // result = prefix * suffix
    for(int i = 0; i < n; i++) {
        res[i] = prefix[i] * suffix[i];
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> res = productExceptSelf(arr);

    for(int x : res) cout << x << " "; // 24 12 8 6
}


*/