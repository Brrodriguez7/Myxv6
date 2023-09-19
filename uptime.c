#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
  if(argc != 2){
    printf("uptime:%s cloclticks\n",uptime());
    exit(1);
  }
  
  exit(0);
}
