#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <thread>
#include <vector>

#include "external_sort/external_sort.h"
#include "storage/file.h"

#define UNUSED(p)  ((void)(p))

namespace buzzdb {

void external_sort(File &input, size_t num_values, File &output,
                   size_t mem_size) {
      
      /* To be implemented
      ** Remove these before you start your implementation
      */
      UNUSED(input); UNUSED(num_values); 
      UNUSED(output); UNUSED(mem_size);
}

}  // namespace buzzdb
