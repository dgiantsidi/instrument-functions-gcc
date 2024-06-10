#include "profiling.h"
#include <stdio.h>
#define __USE_GNU
#include <dlfcn.h>


const char *emptyStr = "";
__attribute__((no_instrument_function))
static const char *getSymbolName(void *addr) {
  void *hdl;
  Dl_info dlInfo={0};

  hdl = dlopen(NULL, 0);
  dladdr(addr, &dlInfo);

  if ((dlInfo.dli_sname != NULL) && (dlInfo.dli_saddr != NULL))
    return dlInfo.dli_sname;
  else {
    return emptyStr;
  }
}

void __cyg_profile_func_enter(void *this_fn, void *call_site) {
    fprintf(stdout, "[%s] func_name=%s (call_site=%s)\n", __func__, getSymbolName(this_fn), getSymbolName(call_site));
}

