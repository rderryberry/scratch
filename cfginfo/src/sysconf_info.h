#ifndef _SYSCONF_INFO_H
#define _SYSCONF_INFO_H

#include <unistd.h>

#define NUM_RT_LIMIT_NAMES 23

const char* runtime_limit_name(int name);
int* rt_limit_name_args();

#endif // _SYSCONF_INFO_H
