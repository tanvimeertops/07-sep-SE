#include<stdio.h>

/*
*
**
***
****
*****

+
++
+++
++++
+++++
a
bc
def
ghij
klmno

+++++*
++++* *
+++* * *
++* * * *
+* * * * *
k completely depends on i
     *
    * *
   * * *
  * * * *
 * * * * *
  /*
  1      *   1 2
  2     ***  3 4
  3    ***** 5 6
        ***
         *
    */

int main(){
    for(int i=1;i<=3;i++){ //5<=4
        for(int k=i;k<=3;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){ //1<=3
            printf("*");
        }
        printf("\n");
    }

    for(int i=2;i>=1;i--){ //5<=4
        for(int k=i;k<=3;k++){
            printf(" ");
        }
        for(int j=i*2-1;j>=1;j--){ //1<=3
            printf("*");
        }
        printf("\n");
    }
    return 0;
}