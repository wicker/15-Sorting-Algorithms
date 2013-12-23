#include "stdio.h"

#define ARGS 3

int instructions();

// take arguments for sort number and data file
int main(int argc, char *argv[]) {
 
  if (argc != ARGS)
    return instructions();

  int sortnum = atoi(argv[1]);
  FILE * filein = fopen(argv[2],"r");
  if (filein == NULL) {
    printf("File did not open properly! Does it exist?\nExiting program.\n");
    return 0;
  }

  printf("Empty program.\n");

  return 0;

}

int instructions() {
  printf("\n \
  Usage: ./main <sort> <data file>\n \
  Choose a sort from the following list:\n \
  1 - Selection sort\n \
  2 - Insertion \n \
  3 - Quick \n \
  4 - Merge \n \
  5 - Heap \n \
  6 - Radix sort (LSD)\n \
  7 - Radis sort (MSD)\n \
  9 - std_sort (gcc)\n \
  10 - std_stable_sort (gcc)\n \
  11 - Shell \n \
  12 - Bubble \n \
  13 - Cocktail Shaker \n \
  14 - Gnome \n \
  15 - Bitonic \n \
  16 - Bogo \n\n");
}

