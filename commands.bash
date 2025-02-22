# Install Make in windows
choco install make

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

# Build diagnostics
g++ -std=c++20 -fdiagnostics-color=always c++/1_simple/version.cpp -o build/version; ./build/version

# -Wall stands for enable all warning
# It instructs the compiler to enable a broad set of warning messages for your code.
# These warnings help you identify potential issues, such as syntax errors, unsafe code practices, and possible bugs, in your code.
g++ -std=c++20 -fdiagnostics-color=always -Wall c++/1_simple/version.cpp -o build/version; ./build/version