# Supposed to be run using a Linux like terminal, use WSL / GitBash for Windows
.SILENT:
.MAKEFLAGS: -s --no-print-directory
MAKE_SILENT := $(MAKE) --no-print-directory

C_PLUS_PLUS_VERSION=c++23
BUILD_DIR=build

##### ---------------------------------
#		Build & Run Commands
##### ---------------------------------

.c_plus_plus_build:
	g++ -std=${C_PLUS_PLUS_VERSION} -fdiagnostics-color=always -Wall $(SRC_PATH)/$(FILE_NAME).cpp -o ./${BUILD_DIR}/$(FILE_NAME);

.c_plus_plus_run:
	./${BUILD_DIR}/$(EXECUTABLE)


##### ---------------------------------
#		Build & Run Scripts/Programs
##### ---------------------------------
run_hello_world:
	$(MAKE_SILENT) .c_plus_plus_build SRC_PATH=c++/1_simple FILE_NAME=hello_world;
	$(MAKE_SILENT) .c_plus_plus_run EXECUTABLE=hello_world

run_version:
	$(MAKE_SILENT) .c_plus_plus_build SRC_PATH=c++/1_simple FILE_NAME=version;
	$(MAKE_SILENT) .c_plus_plus_run EXECUTABLE=version

#run_windows_tcp_echo_server:
#	$(MAKE_SILENT) .c_plus_plus_build SRC_PATH=c++/2_networking/sockets/windows/echo FILE_NAME=server;
#	$(MAKE_SILENT) .c_plus_plus_run EXECUTABLE=server