//
// Created by liu meng on 2018/8/31.
//

#ifndef CUSTOMAPPVMP_SYNC_H
#define CUSTOMAPPVMP_SYNC_H

#include "Thread.h"
#include <dlfcn.h>
typedef void* (*dvmLockObject_func)(Thread* self, Object *obj);
extern dvmLockObject_func dvmLockObjectHook;

typedef void* (*dvmUnlockObject_func)(Thread* self, Object *obj);

extern dvmUnlockObject_func dvmUnlockObjectHook;

  bool initSynFuction(void *dvm_hand,int apilevel);
#endif //CUSTOMAPPVMP_SYNC_H
