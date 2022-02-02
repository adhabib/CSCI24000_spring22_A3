/*this is a test file for messing around with random number
 * generators. this is not my final assignment.*/

//create a program which simulates a horse race
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;

int horses [5] = {0, 0, 0, 0, 0};

int main(){
  int x;
  int i; 
  cout << "Type a number: "; // Please enter a random number as your seed.
  cin >> x; // Get user input from the keyboard
  cout << "The seed you selected is: " << x << endl; // Display the input value

  srand(x);
  for (i = 0; i < 9; i++){
      printf("%d\n ", rand()%100);
  //printf ("\nRandom number: %d\n", rand()%2);
  }
  return 0;
}
