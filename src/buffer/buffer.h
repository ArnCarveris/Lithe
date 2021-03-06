#ifndef LITHE_BUFFER_H
#define LITHE_BUFFER_H


#include <cstddef>
#include "../memory.h"


namespace lithe {
    // Holds a pointer to a chunk of memory and
    // the number of elements it contains.
    struct buffer {
        char* buff;
        size_t chunk_size;
        int num_entities;


        buffer(size_t chunk_size_, int num_entities_);


        ~buffer();
    };
}


#endif