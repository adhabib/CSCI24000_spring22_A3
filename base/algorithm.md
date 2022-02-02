Goal: simulate a horse race using functions and loops.

input: random number

output: a winner

use srand(var), rand()

steps:
1. Get input from user for the seed
2. Declare a global array
a. Declare global variable to be used as index for array
3. Move the horses
a. get 50/50 random number
b. if 1, horse advances, if 0, horse stays
c. use for loop to do this for each horse
4. Check for a winner
a. check if horse position is at end of array
b. if there is a winner, exit
c. check if index has reached array, if so, send it back to beginning
d. checking for winner takes priority to avoid endless loop
5. print track
a. for loop
b. calculate how many spots horse has moved, number of spots = number of dots
behind to print
c. print horse #. If horse is past 14th dot, do not print number
d. calculate 14 minus number of spots horses has moved, result is # of dots to print
ahead of horse
e. exit for loop, new line

