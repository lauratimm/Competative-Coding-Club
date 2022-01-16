#include <iostream>

using namespace std;


int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    for(int i = 1; i <=n; i++) {

        if (i % x == 0 && i % y == 0) {
            std::cout << "FizzBuzz\n";
        } else if (i % x == 0) {
            std::cout << "Fizz\n";
        } else if (i % y == 0) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << "\n";
        }
    }

    return 0 ;

}