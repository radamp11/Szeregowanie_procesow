#include <groups.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int ArgC, char ** ArgV )
{
   unsigned int i;
   unsigned int j;
   int pid = getpid();
   int new_gr = atoi( ArgV[1] );
   setgroup( pid, new_gr );
   printf("A process from group: %d has beed started\n", getgroup(pid) );
   
   for ( i = 0; i < 1200; ++i )
   {
      for ( j = 0; j < 65535 * 256; ++j ) {}
   }

   printf( "I have finished a process from test1 from group %d \n", getgroup(pid) );
   
   return 0;
}
