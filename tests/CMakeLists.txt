find_package(Catch2 3 REQUIRED)

add_executable(tests tests.cpp ../Functions.h ../Functions.cpp)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

#add_custom_command(TARGET tests
#        POST_BUILD
#        COMMAND /bin/sh ${CMAKE_CURRENT_SOURCE_DIR}/test.sh
#        )

#add_custom_command(TARGET tests
#            POST_BUILD
#            COMMAND ../tests/tests
#        )