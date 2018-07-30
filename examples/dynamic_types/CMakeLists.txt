project(helloworldlib)
cmake_minimum_required(VERSION 2.9)

include(CheckCXXCompilerFlag)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_CLANG OR
        CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    check_cxx_compiler_flag(--std=c++11 SUPPORTS_CXX11)
    if(SUPPORTS_CXX11)
        add_compile_options(--std=c++11)
    else()
        message(FATAL_ERROR "Compiler doesn't support C++11")
    endif()
endif()

find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)

add_definitions(-DEPROSIMA_SHAPES_DLL_EXPORT  -DBUILD_SHARED_LIBS)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(BUILD_SHARED_LIBS TRUE)

#----------------------------------------------------------------------------------------------------------------------------------
# STATIC -> STATIC TRANSFORM
file(GLOB USER_STATIC_STATIC_LIB_SOURCES_CXX "idl/*.cxx")
file(GLOB USER_STATIC_STATIC_LIB_SOURCES_CPP "keyhelloworld_static_static_lib.cpp" "idl/*.cpp")
add_library(keyhelloworld_static_static_lib SHARED ${USER_STATIC_STATIC_LIB_SOURCES_CXX} ${USER_STATIC_STATIC_LIB_SOURCES_CPP})
if(WIN32)
	target_include_directories(keyhelloworld_static_static_lib PUBLIC ../../../../../install/include)
endif()
target_link_libraries(keyhelloworld_static_static_lib fastrtps fastcdr ${CMAKE_DL_LIBS})

#----------------------------------------------------------------------------------------------------------------------------------
# STATIC -> DYNAMIC TRANSFORM
file(GLOB USER_STATIC_DYN_LIB_SOURCES_CXX "idl/*.cxx")
file(GLOB USER_STATIC_DYN_LIB_SOURCES_CPP "keyhelloworld_static_dyn_lib.cpp" "idl/*.cpp")
add_library(keyhelloworld_static_dyn_lib SHARED ${USER_STATIC_DYN_LIB_SOURCES_CXX} ${USER_STATIC_DYN_LIB_SOURCES_CPP})
if(WIN32)
	target_include_directories(keyhelloworld_static_dyn_lib PUBLIC ../../../../../install/include)
endif()
target_link_libraries(keyhelloworld_static_dyn_lib fastrtps fastcdr ${CMAKE_DL_LIBS})

#----------------------------------------------------------------------------------------------------------------------------------
# DYNAMIC -> STATIC TRANSFORM
file(GLOB USER_DYN_STATIC_LIB_SOURCES_CXX "idl/*.cxx")
file(GLOB USER_DYN_STATIC_LIB_SOURCES_CPP "keyhelloworld_dyn_static_lib.cpp" "idl/*.cpp")
add_library(keyhelloworld_dyn_static_lib SHARED ${USER_DYN_STATIC_LIB_SOURCES_CXX} ${USER_DYN_STATIC_LIB_SOURCES_CPP})
if(WIN32)
	target_include_directories(keyhelloworld_dyn_static_lib PUBLIC ../../../../../install/include)
endif()
target_link_libraries(keyhelloworld_dyn_static_lib fastrtps fastcdr ${CMAKE_DL_LIBS})

#----------------------------------------------------------------------------------------------------------------------------------
# DYNAMIC -> DYNAMIC TRANSFORM
file(GLOB USER_DYN_DYN_LIB_SOURCES_CXX "idl/*.cxx")
file(GLOB USER_DYN_DYN_LIB_SOURCES_CPP "keyhelloworld_dyn_dyn_lib.cpp" "idl/*.cpp")
add_library(keyhelloworld_dyn_dyn_lib SHARED ${USER_DYN_DYN_LIB_SOURCES_CXX} ${USER_DYN_DYN_LIB_SOURCES_CPP})
if(WIN32)
	target_include_directories(keyhelloworld_dyn_dyn_lib PUBLIC ../../../../../install/include)
endif()
target_link_libraries(keyhelloworld_dyn_dyn_lib fastrtps fastcdr ${CMAKE_DL_LIBS})