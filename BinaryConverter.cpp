#include <iostream>
#include <vector>
using namespace std;
vector<int> joke = {};
void BinaryConvert(int x);
int main() {
    int x = 0;
    cout << "Please input decimal number: ";
    cin >> x;
    BinaryConvert(x); 
}


void BinaryConvert(int  x) {
    bool done = false;
    while (done == false)  {
        if (x/2 == 0) {
            joke.emplace_back(x%2);
            done = true;
        }
        else {
            int result = x % 2;
            joke.emplace_back(result);
            x = x/2;
        }
    }
    for (int i =  size(joke) - 1; i >= 0 ;i-- ) {
        cout << joke[i];
    }
}
