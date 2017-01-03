#include <lib.h>
#include <unistd.h>

//should take an integer as an input
//#of tickets of the calling process
int settickets(int val, int pid) {

    message m;

    m.m_lc_pm_priority.who = pid;
    m.m1_i1 = val;
    
    return _syscall(PM_PROC_NR, SETTICKETS, &m);
    
}
