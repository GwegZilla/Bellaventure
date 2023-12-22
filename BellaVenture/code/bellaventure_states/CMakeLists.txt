file(GLOB_RECURSE FILES
       ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
       ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

qt_add_library(bellaventurestates STATIC
    ${FILES})

target_include_directories (bellaventurestates PUBLIC
    "./include"
    "./states"
    "../bellaventurelib")

    
target_link_libraries(bellaventurestates
PUBLIC
Qt6::Core
Qt6::StateMachine
bellaventurelib
)
