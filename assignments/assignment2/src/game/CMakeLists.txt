include_directories(.)
include_directories(../../include)

file(GLOB_RECURSE SRCS *.cpp)

add_executable(game ${SRCS})

# Link libraries here...
