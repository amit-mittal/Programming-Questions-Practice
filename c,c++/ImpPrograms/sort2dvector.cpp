#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[5][2] = { { 1, 21 }, { 2, 6 }, { 3, 54 }, { 4, 65 }, { 5, 11 } };

bool mySortFunction(const vector<int>& inner1, const vector<int>& inner2) {
        return inner1[1] < inner2[1];
}

int main() {
        vector<vector<int> > vect;
        for (int i = 0; i < 5; ++i) {
                vector<int> inner(arr[i], arr[i] + 2);
                vect.push_back(inner);
        }
        
        sort(vect.begin(), vect.end(), mySortFunction);

        for (int i = 0; i < 5; ++i) {
                arr[i][0] = vect[i][0];
                arr[i][1] = vect[i][1];
        }
}