#include <lib.h>      
#include <unistd.h>   

int pcall(int val) {
    message m;      
    
    m.m1_i1 = val;  
    
    return _syscall(PM_PROC_NR, PRINTINTEGER, &m);  
    
    }