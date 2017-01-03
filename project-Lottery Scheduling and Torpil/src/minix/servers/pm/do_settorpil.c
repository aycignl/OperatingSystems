#include <stdio.h>
#include "pm.h"
#include "mproc.h"

int do_settorpil(void) {
    int rv, torpil_who, torpil;
    struct mproc* m;
    //rv : when error occurs, to set to rv
    torpil_who = m_in.m_lc_pm_priority.who;
    torpil = m_in.m1_i1;
    
    if((m = find_proc(torpil_who)) == NULL){
        return -1;
        
    }

    m_in.m_lc_pm_priority.who = m->mp_endpoint;
    
    return _taskcall(m->mp_scheduler, SCHEDULING_SETTORPIL, &m_in);

}
