#include "sysconf_info.h"

const char* runtime_limit_name(int name) {
  switch (name) {
    case _SC_ARG_MAX:
      return "ARG_MAX";
    case _SC_ATEXIT_MAX:
      return "ATEXIT_MAX";
    case _SC_CHILD_MAX:
      return "CHILD_MAX";
    case _SC_CLK_TCK:
      return "clock ticks/second";
    case _SC_COLL_WEIGHTS_MAX:
      return "COLL_WEIGHTS_MAX";
    case _SC_DELAYTIMER_MAX:
      return "DELAYTIMER_MAX";
    case _SC_HOST_NAME_MAX:
      return "HOST_NAME_MAX";
    case _SC_IOV_MAX:
      return "IOV_MAX";
    case _SC_LINE_MAX:
      return "LINE_MAX";
    case _SC_LOGIN_NAME_MAX:
      return "LOGIN_NAME_MAX";
    case _SC_NGROUPS_MAX:
      return "NGROUPS_MAX";
    case _SC_OPEN_MAX:
      return "OPEN_MAX";
    case _SC_PAGESIZE:
      return "PAGESIZE";
    case _SC_RE_DUP_MAX:
      return "RE_DUP_MAX";
    case _SC_RTSIG_MAX:
      return "RTSIG_MAX";
    case _SC_SEM_NSEMS_MAX:
      return "SEM_NSEMS_MAX";
    case _SC_SEM_VALUE_MAX:
      return "SEM_VALUE_MAX";
    case _SC_SIGQUEUE_MAX:
      return "SIGQUEUE_MAX";
    case _SC_STREAM_MAX:
      return "STREAM_MAX";
    case _SC_SYMLOOP_MAX:
      return "SYMLOOP_MAX";
    case _SC_TIMER_MAX:
      return "TIMER_MAX";
    case _SC_TTY_NAME_MAX:
      return "TTY_NAME_MAX";
    case _SC_TZNAME_MAX:
      return "TZNAME_MAX";
    default:
      return "UNKNOWN LIMIT NAME";
  }
}

int* rt_limit_name_args() {
  static int name_arr[] = {
  _SC_ARG_MAX, _SC_ATEXIT_MAX, _SC_CHILD_MAX, _SC_CLK_TCK,
  _SC_COLL_WEIGHTS_MAX, _SC_DELAYTIMER_MAX, _SC_HOST_NAME_MAX, _SC_IOV_MAX,
  _SC_LINE_MAX, _SC_LOGIN_NAME_MAX, _SC_NGROUPS_MAX, _SC_OPEN_MAX,
  _SC_PAGESIZE, _SC_RE_DUP_MAX, _SC_RTSIG_MAX,
  _SC_SEM_NSEMS_MAX, _SC_SEM_VALUE_MAX, _SC_SIGQUEUE_MAX, _SC_STREAM_MAX,
  _SC_SYMLOOP_MAX, _SC_TIMER_MAX, _SC_TTY_NAME_MAX, _SC_TZNAME_MAX
  };
  return name_arr;
}
