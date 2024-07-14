DO=powershell.exe -Command
SDK_PATH=C:\Users\hmbja\git\pico\pico-sdk
BUILD_DIR=C:/Users/hmbja/git/Rpi-Pico-Hello-World/baremetal/led-blink/build

.PHONY: build

clean:
	${DO} rm -r ${BUILD_DIR}
	${DO} mkdir ${BUILD_DIR}

build:
	${DO} cmake -B ${BUILD_DIR} -DCMAKE_BUILD_TYPE=Debug -DPICO_SDK_PATH=${SDK_PATH} .
	${DO} mv *do_nothing* CMakeFiles *ALL_BUILD*  ${BUILD_DIR}