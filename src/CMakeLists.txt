add_executable(pretty_fork PrettyFork.cpp
    $<TARGET_OBJECTS:four_operation_helper>
    $<TARGET_OBJECTS:log_operation>
)
