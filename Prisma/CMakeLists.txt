cmake_minimum_required(VERSION 3.5)

project(Prisma LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Añade prisma.cpp al ejecutable
add_executable(Prisma main.cpp prisma.cpp)

# Si tu proyecto genera una biblioteca en lugar de un ejecutable, puedes querer ajustar o remover la sección de instalación.
# Para un ejecutable, típicamente se usa RUNTIME en lugar de LIBRARY para especificar el destino de instalación.
install(TARGETS Prisma
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
