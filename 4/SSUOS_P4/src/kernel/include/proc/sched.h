#ifndef		__SCHED_H__
#define		__SCHED_H__

#include <list.h>
#include <proc/proc.h>

struct process* get_next_proc(void);
void schedule(void);

#define PLIST_ROW 7
#define PLIST_COL 20

#endif
