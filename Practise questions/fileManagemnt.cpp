#include <iostream>
using namespace std;

enum week { Sunday=2, Monday=3, Tuesday=4, Wednesday=5, Thursday=6, Friday=7, Saturday=0 };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}
