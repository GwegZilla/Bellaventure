qt_add_executable(appBellaVenture
    src/main.cpp

    include/states/CreationState.h
    include/states/CooldownState.h
    include/states/MasterMachine.h
    include/states/MenuState.h
    include/states/OptionsState.h
    include/states/PlayState.h
    include/states/WarmupState.h

    src/states/CreationState.cpp
    src/states/CooldownState.cpp
    src/states/MasterMachine.cpp
    src/states/MenuState.cpp
    src/states/OptionsState.cpp
    src/states/PlayState.cpp
    src/states/WarmupState.cpp
)

file(GLOB_RECURSE QML_FILES_LIST RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "qml/*.qml")
message("adding qml files ${QML_FILES_LIST}")

file(GLOB_RECURSE PNG_FILES_LIST RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "assets/img/*.png")
message("adding png files ${PNG_FILES_LIST}")

qt_add_qml_module(appBellaVenture
    URI appBellaVenture
    VERSION 1.0
    QML_FILES
        ${QML_FILES_LIST}
    RESOURCES
        ${PNG_FILES_LIST}
    
)

set_target_properties(appBellaVenture PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_include_directories( appBellaVenture PUBLIC
    "./include"
    "./qml"
    "../bellaventurelib")

target_link_libraries(appBellaVenture
    PRIVATE
    Qt6::Core
    Qt6::Quick
    Qt6::StateMachine
    bellaventurelib)

install(TARGETS appBellaVenture
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
