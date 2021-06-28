include_directories(.)
#file(GLOB SrcFiles *.cpp)
#add_executable(src ${SrcFiles})

add_executable(mainsrc
main.cpp
InitHandler.cpp
)
#main.h
target_link_libraries(mainsrc sentry)

