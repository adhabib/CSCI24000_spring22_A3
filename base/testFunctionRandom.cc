#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <sstream>
 
void something(){

  std::cout << rand()%100 << std::endl;
  //std::cout << "\n " << rand()%100 << std::endl;

}

void somethingsomething(){

  std::cout << "\n " << rand()%100 << std::endl;

}

int main(){
  srand(100);
  something();
  somethingsomething();
  return 0;
}
