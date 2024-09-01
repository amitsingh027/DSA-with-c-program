//to print the day of the week from 1 to 7.
// #include <iostream>
// using namespace std;

// int main() {
//     int day ;
//     cin>>day;
//     switch (day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "Invalid";
//     }

//     return 0;
// }


//to check grade.

#include <iostream>
using namespace std;

int main() {
    char grade;
cin>>grade;
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }

    return 0;
}