#include <stdio.h>
#include <unistd.h>
#include <time.h>


#define DEFAULT_TIME 	2


int main(int argc, char **argv) {
    int SLEEP_LENGTH = -1;
    time_t t = time(NULL);
    struct tm tm;
    
    if (argc > 1) {
    	SLEEP_LENGTH = argv[0];
    }
    if (SLEEP_LENGTH < 1) {
    	SLEEP_LENGTH = DEFAULT_TIME;
    }
           
    while(1) {
        t = time(NULL);
        tm = *localtime(&t);
        printf("[Heartbeat] - Still Breathing at time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
        sleep(SLEEP_LENGTH);
    }
    return 0;
}
