cmake_minimum_required(VERSION 3.16)

project(untitled LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(untitled
  main.cpp
)
target_link_libraries(untitled PRIVATE Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS untitled
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
add_executable(tarea-1 tarea-1.cpp)
add_executable(tarea-2 tarea-2.cpp)
add_executable(tarea-3 tarea-3.cpp)
add_executable(tarea-4 tarea-4.cpp)
add_executable(tarea-5 tarea-5.cpp)
add_executable(tarea-6 tarea-6.cpp)
add_executable(tarea-7 tarea-7.cpp)
add_executable(tarea-8 tarea-8.cpp)