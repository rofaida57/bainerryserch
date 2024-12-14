#include<iostream>
#include<algorithm>  
using namespace std;
int bs(int t[], int l, int h, int x) {
    int mid = l + (h - l) / 2;  
    if (l > h) {
        return -1;
    }
    else if (t[mid] == x) {
        return mid;  
    }
    else if (t[mid] < x) {
        return bs(t, mid + 1, h, x);  
    }
    else {
        return bs(t, l, mid - 1, x); 
}
}
int main() {
    int x, i;
    int t[20];

    for (i = 0; i < 20; i++) {
        t[i] = std::rand() % 1000;
    }
    std::sort(t, t + 20); 
    cout << "Sorted array: ";
    for (i = 0; i < 20; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
    cout << "Enter the element to search for: ";
    cin >> x;
    int result = bs(t, 0, 19, x);
    if (result == -1) {
        cout << "Does not exist" << endl;  
    }
    else {
        cout << "Exists at index " << result << endl;  
    }
    return 0;
}
