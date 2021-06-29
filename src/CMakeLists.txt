include_directories(.)
add_executable(main_program
main.cpp
main.h
Handler.cpp
Handler.h
)
#main.h
target_link_libraries(main_program sentry)
target_link_libraries(main_program discord-rpc)
