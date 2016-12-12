#include <lib.h>      
#include <unistd.h>   
//in /usr/src/minix/lib/libc/sys

int pcall(int val) {
    message m;      
    
    m.m1_i1 = val;  
    
    return _syscall(PM_PROC_NR, PRINTINTEGER, &m);  
    
    }
