# BasicPicoProjects
Basic starter code I develop for Rpi Pico. Developed with vanilla VS Code, minimal extensions... on windows. 
Plans to include FreeRTOS and develop in C, C++ and perhaps Baremetal Rust. Idk :)

### Some notes to replicate what I've done:
I've used chocolatey to download openocd

Copy of VS Code Project Settings:

```
{
    "cmake.pinnedCommands": [
        "workbench.action.tasks.configureTaskRunner",
        "workbench.action.tasks.runTask"
    ],
    "cortex-debug.openocdPath": "C:/ProgramData/chocolatey/bin/openocd.exe",
    "cortex-debug.gdbPath": "C:/Program Files (x86)/GNU Arm Embedded Toolchain/10 2021.10/bin/arm-none-eabi-gdb.exe"
}
```
