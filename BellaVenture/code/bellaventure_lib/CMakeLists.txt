file(GLOB_RECURSE FILES
       ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
       ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

qt_add_library(bellaventurelib STATIC
    ${FILES})

target_include_directories (bellaventurelib PUBLIC
    "./include"
    "./qml"
    "./engine"
    "./models")

    
target_link_libraries(bellaventurelib
PUBLIC
Qt6::Core
)
