#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

// compile like:  gcc -Wall -O2 -DNROWS=10000 matrix2.c -o matrix2


#define NCOLS 100

void get_walltime(double *wct) {
  struct timeval tp;
  gettimeofday(&tp,NULL);
  *wct = (double)(tp.tv_sec+tp.tv_usec/1000000.0);
}


int main() {
double *table;
double ts,te;


  table = (double *)malloc(NROWS*NCOLS*sizeof(double)); 
  if (table==NULL) {
    printf("alloc error!\n");
    exit(1);
  }

  // warmup

  // ...your code here...

  // get starting time (double, seconds) 
  get_walltime(&ts);
  
  // workload

  // ...your code here...

  // get ending time
  get_walltime(&te);

  // check results
  
  // ...your code here...

  // print time elapsed and/or Maccesses/sec
  
  // ...your code here...  
  
  free(table);

  return 0;
}

