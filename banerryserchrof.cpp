#include <iostream>
#include <algorithm>  //std::sort
#include <cstdlib>    //std::rand
using namespace std;
int main(){
    int t[20], x;
    for (int i = 0; i < 20; i++) t[i] = rand() % 1000;
    sort(t, t + 20);
    cout<<"the elements:";
    for (int i = 0; i < 20; i++) cout << t[i] << " ";
    cout << endl;
    cout << "enter element";
    cin >> x;
    int* result = lower_bound(t, t + 20, x);
    if (result != t + 20 && *result == x)
        cout << "exsest in element:" << result - t << endl;
    else
        cout << "not exsest"<< endl;
    return 0;
}
