#include <stdio.h>
#include <unistd.h>
#include <time.h>


#define DEFAULT_TIME 	2

int main(int argc, char **argv) {
    time_t t = time(NULL);
    struct tm tm;
    while(1) {
        t = time(NULL);
        tm = *localtime(&t);
        printf("[Heartbeat] - Still Breathing at time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
        sleep(DEFAULT_TIME);
    }
    return 0;
}
