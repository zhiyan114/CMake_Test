#include_directories(.)
#file(GLOB SrcFiles *.cpp)
#add_executable(src ${SrcFiles})
add_executable(src
main.h
main.cpp
InitHandler.cpp
)
target_link_libraries(src sentry)

