set(MODULE_NAME "BVStates")

file(GLOB_RECURSE CPP_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
file(GLOB_RECURSE HPP_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h *hpp)

qt_add_library(${MODULE_NAME} STATIC
${CPP_SOURCES} ${HPP_SOURCES})

target_include_directories (${MODULE_NAME} PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/include)

    
target_link_libraries(${MODULE_NAME}
PUBLIC
Qt6::Core
Qt6::StateMachine
BVEngine
)
