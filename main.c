#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
  printf("daemonising...\n");
  daemon(0,0);
  while(1)
  {
    sleep(10);
    system("touch /tmp/hello.txt");
  }
    
  return 0;
}
