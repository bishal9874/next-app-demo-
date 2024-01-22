// #include<stdio.h>
// #include<unistd.h>
// #include<stdlib.h>
// int main( )
// {
// int pid;
// pid=fork( );
// if(pid== -1)
// {
// perror(“fork failed”); exit(0);
// }
// if(pid==0)
// {
// printf(“\n Child process is under execution”);
// printf(“\n Process id of the child process is %d”, getpid()); printf(“\n
// Process id of the parent process is %d”, getppid());
// }
// else
// {
// printf(“\n Parent process is under execution”);
// printf(“\n Process id of the parent process is %d”, getpid());
// printf(“\n Process id of the child process in parent is %d”, pid());
// printf(“\n Process id of the parent of parent is %d”, getppid());
// }
// return(0);
// }
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int pid;
    pid = fork();

    if (pid == -1) {
        perror("fork failed");
        exit(0);
    }

    if (pid == 0) {
        printf("\nChild process is under execution");
        printf("\nProcess id of the child process is %d", getpid());
        printf("\nProcess id of the parent process is %d", getppid());
    } else {
        printf("\nParent process is under execution");
        printf("\nProcess id of the parent process is %d", getpid());
        printf("\nProcess id of the child process in parent is %d", pid);
        printf("\nProcess id of the parent of parent is %d", getppid());
    }

    return 0;
}
