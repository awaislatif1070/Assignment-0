#include <stdio.h> 
#include <time.h> 
#include <sys/time.h> 
#include <unistd.h> 
int main()
{
    struct timeval start, end;
    long mtime, seconds, useconds;
    int i = 0;
    gettimeofday(&start, NULL);
    const char msg[] = "Hello AWAIS LATIF\n";
    while (i < 100)
    {
        write(STDOUT_FILENO, msg, sizeof(msg) - 1);
        i++;
    }
    gettimeofday(&end, NULL);
    printf("Time Taken by write() : %ld microseconds \n", end.tv_usec-start.tv_usec);
    return 0;
}
