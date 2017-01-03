#include <stdio.h>
#include "pm.h"
#include "mproc.h"


int do_settickets(void) {
    int rv, ticket_who, count;
    struct mproc* m;
    //rv : when error occurs, to set to rv
    ticket_who = m_in.m_lc_pm_priority.who;
    count = m_in.m1_i1;
    
    if((m = find_proc(ticket_who)) == NULL){
        return -1;
        
    }

    m_in.m_lc_pm_priority.who = m->mp_endpoint;

    return _taskcall(m->mp_scheduler, SCHEDULING_SETTICKETS, &m_in);
}
