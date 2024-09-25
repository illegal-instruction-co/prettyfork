#include "operation/Log.h"

#include <iostream>

using namespace prettyfork::internal::operation;

void Log::Write(const char* message) noexcept {
    std::cout << message << std::endl;
}
