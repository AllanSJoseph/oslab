#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
pid_t child_pid;
child_pid = fork();
if (child_pid < 0) {
  //Fork Failed
  perror("Fork Failed");
  return 1;
} else if (child_pid == 0){
  //Child Process
  printf("Child process: My PID is %d \n",getpid());
  printf("Parent process: My PID is (getppid) %d\n",getppid());
}else {
  //Parent Process
  wait(NULL);
  printf("Parent process: My PID is %d\n",getpid());
  printf("Parent process: Child process ID is %d\n", child_pid);
}
return 0;
}