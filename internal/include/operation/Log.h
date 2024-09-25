#pragma once

#include "Operation.h"

namespace prettyfork::internal::operation {

    struct Log final : public Operation {
        static void Write(const char*) noexcept;
    };
    
}
