//to check the value of x and y is 1 0r not
#include <iostream>
using namespace std;

int main() {
    int x ;
    int y ;
cin>>x >>y ;
    switch (x) {
        case 1:
            cout << "x is 1." << endl;
            switch (y) {
                case 1:
                    cout << "y is 1." << endl;
                    break;
                default:
                    cout << "y is not 1." << endl;
            }
            break;
        default:
            cout << "x is not 1." << endl;
    }

    return 0;
}