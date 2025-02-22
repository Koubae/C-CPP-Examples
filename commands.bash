##########################################
#            RUN / BUILD                 #
##########################################
# Assumes Windows Powershell
g++ .\c++\1_simple\hello_world.cpp -o  build\hello_world
# git Bash (Windows)
g++ c++/1_simple/hello_world.cpp -o  build/hello_world
# run
build\hello_world.exe
build/hello_world

# Build specific version
g++ -std=c++23 c++/1_simple/version.cpp -o build/version; ./build/version
g++ -std=c++20 c++/1_simple/version.cpp -o build/version; ./build/version
g++ -std=c++17 c++/1_simple/version.cpp -o build/version; ./build/version
g++ -std=c++14 c++/1_simple/version.cpp -o build/version; ./build/version
g++ -std=c++11 c++/1_simple/version.cpp -o build/version; ./build/version
g++ -std=c++98 c++/1_simple/version.cpp -o build/version; ./build/version