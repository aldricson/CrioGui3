cmake_minimum_required(VERSION 3.16)

set (THISPROJECT "crioGui3")
#Program sources directory
set (SOURCES_DIRECTORY ./src)

set(PROJECT_MAIN_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui)

set(PROJECT_RESOURCES
        styles.qrc
        crio-gui2.qrc
        scripts.qrc
        imdisk.qrc)

project(${THISPROJECT} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Network Widgets Concurrent Charts SerialBus)

#recursively fill a list of all current project headers
message (STATUS "")
message (STATUS "*****************************************")
message (STATUS "* recursively load project headers: *.h *")
message (STATUS "*****************************************")
message (STATUS "")
file(GLOB_RECURSE PROJECT_HEADERS ${SOURCES_DIRECTORY}/*.h)
foreach( files ${PROJECT_HEADERS})
    get_filename_component(barename ${files} NAME)
    message(STATUS "found : " ${barename})
endforeach( files ${PROJECT_HEADERS} )

#recursively fill a list of all current project headers
message (STATUS "")
message (STATUS "********************************************")
message (STATUS "* recursively load project sources : *.cpp *")
message (STATUS "********************************************")
message (STATUS "")
file(GLOB_RECURSE PROJECT_SOURCES ${SOURCES_DIRECTORY}/*.cpp)
foreach( files ${PROJECT_SOURCES})
    get_filename_component(barename ${files} NAME)
    message(STATUS "found : " ${barename})
endforeach( files ${PROJECT_SOURCES} )

qt_add_executable(${THISPROJECT}
#    MANUAL_FINALIZATION
    ${PROJECT_MAIN_SOURCES}
    ${PROJECT_HEADERS}
    ${PROJECT_SOURCES}
    ${PROJECT_RESOURCES}

)

set_target_properties(${THISPROJECT} PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(${THISPROJECT} PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Network
    Qt::Widgets
    Qt::Concurrent
    Qt::Charts
    Qt::SerialBus
)

#if(QT_VERSION_MAJOR EQUAL 6)
#    qt_finalize_executable(${THISPROJECT})
#endif()


