

#include <vector>
using namespace std;
class ProductOfNumbers {
    vector<int> nums;
    vector<int> preProducts;
public:
    ProductOfNumbers() {
        preProducts.push_back(1);
    }

    void add(int num) {
        nums.push_back(num);
        if (num == 0) {
            preProducts.clear();
            preProducts.push_back(1);
        } else {
            preProducts.push_back(preProducts.back() * num);
        }
    }

    int getProduct(int k) {
        if (k >= preProducts.size()) {
            return 0;
        }
        return preProducts[preProducts.size() - 1] / preProducts[preProducts.size() - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */