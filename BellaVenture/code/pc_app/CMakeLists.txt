qt_add_executable(appBellaVenture
    src/main.cpp
)

qt_add_qml_module(appBellaVenture
    URI appBellaVenture
    VERSION 1.0
    QML_FILES
    qml/main.qml
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
    "../bellaventurelib")

target_link_libraries(appBellaVenture
    PRIVATE
    Qt6::Quick
    bellaventurelib)

install(TARGETS appBellaVenture
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
