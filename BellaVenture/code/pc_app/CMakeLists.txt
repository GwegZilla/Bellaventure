file(GLOB_RECURSE FILES
       ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
       ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

qt_add_executable(appBellaVenture
    ${FILES}
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
    WIN32_EXECUTABLE TRUE
)

target_include_directories( appBellaVenture PUBLIC
    "./include"
    "./qml"
    "./states"
    "./models"
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
