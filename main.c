#include "stdio.h"

#define ARGS 3
#define DATAPOINTS 10

int instructions();
int exit_program();
int selection_sort(int * data);

// take arguments for sort number and data file
int main(int argc, char *argv[]) {
 
  if (argc != ARGS)
    return instructions();

  int i;
  int sortnum = atoi(argv[1]);
  FILE * filein = fopen(argv[2],"r");
  if (filein == NULL) {
    printf("File did not open properly! Does it exist?\n");
    exit_program();
    return 0;
  }

  int data_array[DATAPOINTS];
  for (i = 0; i < DATAPOINTS; i++) {
    fscanf(filein, "%d,", &data_array[i]);
  }

  switch(sortnum) {
    case 1:
      printf("#1 - Selection Sort\n");
      selection_sort(data_array);
      for (i = 0; i < DATAPOINTS; i++) {
        printf("data_array[%d] = %d\n",i,data_array[i]);
      }
      break;
    case 2:
      printf("#2 - Insertion Sort\n");
      break;
    case 3:
      printf("#3 - Quick Sort\n");
      break;
    case 4:
      printf("#4 - Merge Sort\n");
      break;
    case 5:
      printf("#5 - Heap Sort\n");
      break;
    case 6:
      printf("#6 - Radix Sort (LSD)\n");
      break;
    case 7:
      printf("#7 - Radix Sort (MSD)\n");
      break;
    case 8:
      printf("#8 - std_sort (gcc)\n");
      break;
    case 9:
      printf("#9 - std_stable_sort (gcc)\n");
      break;
    case 10:
      printf("#10 - Shell Sort\n");
      break;
    case 11:
      printf("#11 - Bubble Sort\n");
      break;
    case 12:
      printf("#12 - Cocktail Shaker Sort\n");
      break;
    case 13:
      printf("#13 - Gnome Sort\n");
      break;
    case 14:
      printf("#14 - Bitonic Sort\n");
      break;
    case 15:
      printf("#15 - Bogo Sort\n");
      break;
    default:
      printf("Improper sort number. Range 1-15.\n");
  }
      exit_program();

}

int selection_sort(int * data) {
  int i;
  for (i = 0; i < DATAPOINTS; i++) {
    printf("data[%d] = %d\n",i,data[i]);
    data[i] = DATAPOINTS - i;
  }
  return 0;
}

int exit_program() {

  printf("Exiting program.\n");
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
  8 - std_sort (gcc)\n \
  9 - std_stable_sort (gcc)\n \
  10 - Shell \n \
  11 - Bubble \n \
  12 - Cocktail Shaker \n \
  13 - Gnome \n \
  14 - Bitonic \n \
  15 - Bogo \n\n");
}

