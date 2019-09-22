#ifndef BASE_PAGE_ALLOCATOR_H_
#define BASE_PAGE_ALLOCATOR_H_

#include "PlatformInterface/Common/Platform.h"

namespace zz {

class PageAllocator {
public:
  static void *Allocate(MemoryPermission permission);

  static int PageSize();

  static bool SetPermissions(void *address, MemoryPermission access);
};

} // namespace zz

#endif