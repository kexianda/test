
#include <stdio.h>


// #if __STDC_VERSION__ >= 199901L
// #define _XOPEN_SOURCE 600
// #else
// #define _XOPEN_SOURCE 500
// #endif /* __STDC_VERSION__ */
#include <time.h>
//using namespace std;

int main()
{
    timespec time1, time2;
    int temp;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
    //do stuff here
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
    return 0;
}