#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define NCOLS 100
//#define NROWS 100000  epidh xrhsimopoiw windows sthn arxi to etrexa me define

 void get_walltime(double *wct) {
  struct timeval tp;
  gettimeofday(&tp,NULL);
  *wct = (double)(tp.tv_sec+tp.tv_usec/1000000.0);
}

int main(){
	double *table;
	int i,j;
	double sum=0.0,ts,te,total;
        

	table = (double *)malloc(NROWS*NCOLS*sizeof(double));
	if (table==NULL) {
	    printf("malloc error!\n");
	    exit(1);
	}

        for (i=0;i<NROWS*NCOLS;i++) {
           table[i] = 2.0;
        } 
  
       /*ΣΑΡΩΣΗ ΓΡΑΜΜΗ-ΓΡΑΜΜΗ*/
        get_walltime(&ts);
  
         for (i=0;i<NROWS;i++) {
  
           for (j=0;j<NCOLS;j++) {
           
             sum += table[i*NCOLS+j];
          
           }
           
        }

        get_walltime(&te);
       
        total = te-ts;
         
         printf("\nsum = %f",sum);
         
         printf("\nTime : %lf",total);
        
	free(table);

	return (0);
}
