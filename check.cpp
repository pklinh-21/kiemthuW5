#include <iostream>
using namespace std;

int TongCacSoChan(int n) {
    int i = 0;
    int res = 0;
    while (i < n) {
        if (i % 2 == 0) {
            res += i;
        }
        i++;
    }
    return res;
}

void output() {
    cout << "Test 1:" << endl << "TongCacSoChan(1): " << TongCacSoChan(1) << endl;
    cout << "Test 2:" << endl << "TongCacSoChan(-3): " << TongCacSoChan(-3) << endl;
    cout << "Test 3:" << endl << "TongCacSoChan(2): "  << TongCacSoChan(2) << endl;
    cout << "Test 4:" << endl << "TongCacSoChan(4): " << TongCacSoChan(3) << endl;
}

int main()
{
    output();
}

