#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void timeOver(int signum) {
    printf("\n\ntime over!\n\n");
    exit(0);
}

int main(void) {
    char buf[1024];
    char *alpha = "abcdefghijklmnopqrstuvwxyz";
    
    int timeLimit;
    struct sigaction act;
    
    act.sa_handler = timeOver;
    sigaction(SIGALRM, &act, NULL);
    printf("input time limit (sec)..\n");
    scanf("%d", &timeLimit);
    
    printf("START!!\n > ");
    scanf("%s", buf);
    
    if (!strcmp(buf, alpha)) printf("well done, succeed!");
    else printf("sorry, failure..");
}
