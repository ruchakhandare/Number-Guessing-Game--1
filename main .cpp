#include <iostream>
using namespace std;

int main () {
  int secretNumber =20;
int guess;

cout << "Guess the number: " ;
cin >> guess; 

if (guess < secretnumber)
  cout << "too Low !"
    else if (guess> secretNumber)
    cout  << "Too High!";
else 
cout << "congratulation !";

return 0;
}
