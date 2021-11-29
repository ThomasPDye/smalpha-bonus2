add_library(smorse smorse.cpp)

add_library(smalpha smalpha.cpp)

add_executable(smalpha_bonus2 main.cpp)
target_link_libraries(smalpha_bonus2 smorse smalpha)
