qt_add_library(bellaventurelib STATIC
    include/CharacterStats.h
    include/StrongTypes.h
    src/CharacterStats.cpp)

target_include_directories (bellaventurelib PUBLIC
    "include")
