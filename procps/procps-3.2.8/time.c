#include <stdio.h>
#include <time.h>

static char buf[128];

int main(){

    time_t realseconds;
    struct tm *realtime;
    
    printf("Time program: by Kito J.\n");
    
    //get current time
    time(&realseconds);
    realtime = localtime(&realseconds);
    sprintf(buf, " %02d:%02d:%02d ",
    realtime->tm_hour, realtime->tm_min, realtime->tm_sec);
    
    printf("The current time is : %s\n",buf);
}
