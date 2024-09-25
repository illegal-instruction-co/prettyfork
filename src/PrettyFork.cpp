#include "PrettyFork.h"

#include "helper/FourOperations.h"

#include "operation/Log.h"

#include <string>

int main() {
    using namespace std;

    using namespace prettyfork::internal;

    int a = 1;
    int b = 2;

    int sum = helper::FourOperations::Add(a, b);

    operation::Log::Write(("The sum is " + to_string(sum)).data());
    
    return 0;
}
