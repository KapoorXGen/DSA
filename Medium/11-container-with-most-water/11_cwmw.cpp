#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height){
    int i = 0, j = height.size() - 1;
    int max_area = 0;

    while (i < j){
        int h = min(height[i], height[j]);
        int width = j - i;
        int area = h * width;
        max_area = max(max_area, area);
        height[i] < height[j] ? i++ : j--;
    }
    return max_area;
}

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum water that can be contained: " << maxArea(height) << endl;
    return 0;
}
