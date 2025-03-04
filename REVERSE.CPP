#include <conio.h>
#include <iostream.h>
//using namespace std;

long int reverseIt(long int num) {  // Use long int
    long int rev = 0;
    while (num > 0) {
	rev = rev * 10 + (num % 10);
	num /= 10;
    }
    return rev;
}

int main() {
    long int num;  // Use long int
    clrscr();
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed Number: " << reverseIt(num) << endl;
    if (num == reverseIt(num)) {
      cout << "The number is a palindrome." << endl;
  } else {
      cout << "The number is not a palindrome." << endl;
  }
    getch();
    return 0;
}
