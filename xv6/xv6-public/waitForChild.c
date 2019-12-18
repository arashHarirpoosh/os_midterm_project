#include "types.h"
#include "stat.h"
#include "user.h"

struct timeVariables{
  int creationTime;
  int terminationTime;
  int sleepingTime; 
  int readyTime; 
  int runningTime;
  };

int main(void) {
   for(int f=0; f<10;f++){
    int pid = fork();
    if (pid == 0){
        for (int i = 0; i < 1000; ++i)
		printf(1, "%d : %d \n", getpid(), i);
		//sleep(0.1);
        exit();
    } else if(pid > 0){
        struct timeVariables *tv = malloc(sizeof(struct timeVariables));
        //sleep(7);
        waitForChild(tv);
        printf(1, "creationTime %d\n", tv->creationTime);
        printf(1, "terminationTime %d\n", tv->terminationTime);
        printf(1, "readyTime %d\n", tv->readyTime);
        printf(1, "sleepingTime %d\n", tv->sleepingTime);
        printf(1, "runningTime %d\n \n", tv->runningTime);
        
    }
    }
    exit();
}


