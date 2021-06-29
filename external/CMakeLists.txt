# Sentry Lib
add_subdirectory(sentry-native)
target_include_directories(sentry INTERFACE "./sentry-native/include")

# Discord-RPC
add_subdirectory(discord-rpc)
target_include_directories(discord-rpc INTERFACE "./discord-rpc/include")
