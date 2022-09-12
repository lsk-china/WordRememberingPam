cmake_minimum_required(VERSION 3.23)
project(WordRememberingPam C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)

include_directories(.)
include(FindPkgConfig)
pkg_check_modules(PKGS_DEP REQUIRED
        pam
        )
FOREACH(flag ${PKGS_DEP_CFLAGS})
    SET(EXTRA_CFLAGS "${EXTRA_CFLAGS} ${flag}")
ENDFOREACH(flag)
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EXTRA_CFLAGS}")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EXTRA_CFLAGS}")

add_library(WordRememberingPam SHARED
        main.c)

target_link_libraries(WordRememberingPam ${PKGS_DEP_LDFLAGS})
