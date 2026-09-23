#include <stdio.h>
int main(void)
{
greeting("Developer A,B,C !!\n");
return 0;
}
//Print a greeting message for specified user
int greeting(const char *name)
{
printf("Hello, %s!\n", name);
return 0;
}