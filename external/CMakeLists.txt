# Sentry Lib
add_subdirectory(sentry-native)
target_include_directories(sentry INTERFACE "./sentry-native/include")

target_compile_definitions(sentry INTERFACE -DSENTRY_BACKEND=crashpad)
#target_include_directories(sentry INTERFACE "./sentry-native/include")
