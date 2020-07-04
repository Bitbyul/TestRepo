# CMakeList.txt: Server에 대한 CMake 프로젝트, 여기에 소스를 포함하고
# 프로젝트 특정 논리를 정의합니다.
#
cmake_minimum_required (VERSION 3.8)

# 이 프로젝트의 실행 파일에 소스를 추가합니다.
add_executable (Server "CarPetServer.cpp" "Server.h" "Start.cpp")

find_package(Boost REQUIRED COMPONENTS log)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})

    message("Boost VERSION: ${Boost_VERSION}")
    message("Boost INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message("Boost Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")
    message("Boost LIBRARIES: ${Boost_LIBRARIES}")

    TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${Boost_LIBRARIES})
endif ()

# TODO: 필요한 경우 테스트를 추가하고 대상을 설치합니다.
