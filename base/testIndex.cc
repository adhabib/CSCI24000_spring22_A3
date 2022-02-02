#include <stdlib.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>      // std::stringstream

int horses [5] = {0, 0, 0, 0, 0};
  
void aNumber(horse0){
  printf("\n%d\n", horse0);
}

int main(int horse0, int horse1, int horse2, int horse3, int horse4){
  std::stringstream ss;

  ss << horses[0] << ' ' << horses[1] << ' ' << horses[2] << ' ' << horses[3] << ' ' << horses[4];

  int horse0, horse1, horse2, horse3, horse4;
  ss >> horse0 >> horse1 >> horse2 >> horse3 >> horse4;


    /*srand(1);

  bool keepGoing = true;
  while (keepGoing){
    int r = rand()%2;
    if (r = 1){
      horse0 = horse0 + 1;
      printf("\n%d\n", horse0);
      if (horse0 > 14){
        keepGoing = false;
      }
    }
    else if (r = 0){
      keepGoing = false;
    }
  }*/
  aNumber();
  return 0;
}
