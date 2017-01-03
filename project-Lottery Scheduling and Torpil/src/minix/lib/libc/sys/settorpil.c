#include <lib.h>
#include <unistd.h>

//should take 0 or 1 as input, 
//1: calling process should have torpil
int settorpil(int val, int pid) { //value=torpil
    message m;
    
    m.m1_i1 = val;
    m.m_lc_pm_priority.who = pid;

    
    return _syscall(PM_PROC_NR, SETTORPIL, &m);
    
}
