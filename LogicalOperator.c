#include<stdio.h>
/*
logical operator
&& || !
&&
T   T   T
T   F   F
F   T   F
F   F   F
||

T   T   T
T   F   T
F   T   T
F   F   F


*/
int main(){
    int a=5;
                
    printf("\n%d",a<10 && a<20);
    printf("\n%d",a>10 && a<20);
    printf("\n%d",a<10 && a>20);

    printf("\n%d",a<10 || a<20);
    printf("\n%d",a>10 || a<20);
    printf("\n%d",a<10 || a>20);

    printf("\n %d",!(3<2));
    return 0;
}