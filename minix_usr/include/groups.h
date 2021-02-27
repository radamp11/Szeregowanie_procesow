#include <lib.h>

int getgroup( pid_t pid )
{
   message m;
   m.m1_i1 = pid;
   return _syscall( MM, GETGROUP, &m );
}

int setgroup( pid_t pid, int new_group )
{
   message m;
   m.m1_i1 = pid;
   m.m2_l2 = new_group;
   return _syscall( MM, SETGROUP, &m );
}
