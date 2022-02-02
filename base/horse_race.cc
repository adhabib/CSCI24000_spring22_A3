//create a program which simulates a horse race
#include <stdio.h>      /* printf, NULL*/
#include <stdlib.h>     /* sand, rand */
#include <time.h>       /* time */
#include <iostream>

const int track = 15; //create global variable for track

//define global array
int horses [5] = {0, 0, 0, 0, 0};

int i; //global variable for index of array

//function prototypes
void printTrack();
//void array();
void horseAdvance();
void nextStep();

//function for printing the track
void printTrack(){
  //declare variables for functions
  int p;
  int behindStep;
  int aheadStep;
  //for loop for each lane on the track
  for (p = 0; p < 5; p++){
    for (behindStep = 0; behindStep < horses[p]; behindStep++){
      //print track behind horse
      std::cout << ".";
    } //end for
    //print horse, skip if horse at end
    if (behindStep < 15){
      std::cout << " " << p;
    } //end if
    //print track ahead of horse
    for (aheadStep = 0; aheadStep < 14 - horses[p]; aheadStep++){
      std::cout << ".";
    } //end for
    std::cout << std::endl;
  } //end for
  std::cout << std::endl;
} //end function

//function used for testing purposes
/*
void array(){
  int h;
  std::cout << "[";
  for (h = 0; h < 5; h++){
    printf("%d ", *(horses + h));
  }
  std::cout << "]" << std::endl;
}
*/

//function for advancing horse
void horseAdvance(){
  //generate random 0 or 1
  int tossCoin = rand()%2;
  if (tossCoin == 1){
    //advance horse one step
    horses[i] = horses[i] + 1;
  } //end if
} //end function

//function responsible for printing what you see, also houses other functions
void nextStep(){
  for (i = 0; i < 6; i++){
    horseAdvance();
    //print progress so far if in last index of array
    if (i == 4){
      printTrack();
    } //end if
    //if a horse has finished, end
    if (horses[i] == track){
      printTrack();
      std::cout << "Horse " << i << " wins!" << std::endl;
      break;
    } //end if
    //if array has been looped, reset to beginning index
    else if (i > 4){
      i = -1;
    } //end else if
  } //end for
} //end function

//main function
int main(){
  //declare variable for srand
  int x;
  std::cout << "Please enter a random number for the seed: "; // Get a seed
  std::cin >> x; // Get user input from the keyboard
  srand(x);
  nextStep();
  
  return 0;
} //end function
