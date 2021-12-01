add_library(test_alpha test_alpha.cpp)
target_link_libraries(test_alpha alpha)

add_executable(test_alpha_main test_alpha_main.cpp)
target_link_libraries(test_alpha_main test_alpha)

add_executable(test_minsmalpha_main test_minsmalpha_main.cpp)
target_link_libraries(test_minsmalpha_main minsmalpha alpha smalpha)

add_test(NAME test_run_alpha COMMAND test_alpha_main)

add_test(NAME test_run_minsmalpha COMMAND test_minsmalpha_main)
