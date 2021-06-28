include_directories(.)
#file(GLOB SrcFiles *.cpp)
#add_executable(src ${SrcFiles})

add_executable(src
main.cpp
InitHandler.cpp
)
#main.h
target_link_libraries(src sentry)

