#include <stdio.h>      /* printf, NULL*/
#include <stdlib.h>     /* sand, rand */
#include <time.h>       /* time */
#include <iostream>

int horses [5] = {0, 0, 0, 0, 0};

int main(){
  int i = 3;
  horses[1]++;
  std::cout << "horse " << i << " wins" << std::endl;
  return 0;
}
