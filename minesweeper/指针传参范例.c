#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printnum(int *src, int *targ);
int main ()
{       
        int i;
        int *p;
        int source_num[10] = {1,2,3,4,5,6,7,8,9,10};
        int target_num[10];
        printnum(&source_num[0],&target_num[0]);
        for (i = 0;i<10;i++)
        {
                printf("%d\n",target_num[i]);
        }
}
 
 void printnum(int *src, int *targ)
{       
        
        int i;
        for (i = 0;i<10;i++)
                {
                         *targ = *src;
                         targ++;
                         src++;

                }
}
