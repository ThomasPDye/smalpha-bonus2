add_library(smorse smorse.cpp)

add_library(smalpha smalpha.cpp)

add_library(alpha alpha.cpp)

add_library(minsmalpha minsmalpha.cpp)
target_link_libraries(minsmalpha smorse)
