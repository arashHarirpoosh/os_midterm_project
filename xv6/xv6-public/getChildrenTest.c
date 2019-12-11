#include "types.h"
#include "stat.h"
#include "user.h"
 
int
main(void)
{
printf(1,"Process Id Is :  %d \n", getChildren(getpid()));
exit();
}
