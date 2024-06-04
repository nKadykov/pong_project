cmake_minimum_required(VERSION 3.10)
project(pong_project)

set(CMAKE_TOOLCHANE_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")

include_directories(include)

add_executable(pong_project include/ball.h include/button.h include/game.h include/gameoverwindow.h include/menu.h include/paddle.h src/ball.cpp src/button.cpp src/game.cpp src/gameoverwindow.cpp src/menu.cpp src/paddle.cpp src/main.cpp)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(pong_project sfml-system sfml-window sfml-graphics sfml-network sfml-audio)