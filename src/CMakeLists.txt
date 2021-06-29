include_directories(.)
add_executable(main_program
main.cpp
main.h
handler.cpp
handler.h
)
#main.h
target_link_libraries(main_program sentry discord-rpc)
#target_link_libraries(main_program discord-rpc)
