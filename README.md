# Gazebo_World

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) [![macOS](https://svgshare.com/i/ZjP.svg)](https://svgshare.com/i/ZjP.svg) [![Atom](https://badgen.net/badge/icon/atom?icon=atom&label)](https://atom.io)

Welcome to my first project for [Udacity's Robotics Software Engineer Nanodegree]()! In here, I have buildt a Gazebo world for my future projects in the Nanodegree.

The floor plan was inspired from Joyce's House (Stranger Things). 

## Environment
👉 macOS 12.0.1 Monterey with Intel Core i7 chip    
👉 Gazebo 11.9.1    
👉 C++ 17    
👉 cMake 3.22.1  
👉 GNU Make 3.81  
👉 Apple clang version 13.0.0      

## Compiling and Running
### Compile
**For macos only!** Add the following variables to the current terminal environment to bypass TBB library deprecation errors with Gazebo 11 ([Reference here](https://github.com/osrf/homebrew-simulation/issues/1486#issuecomment-850218440)):  

```
export CMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH}:/usr/local/opt/tbb@2020_u3
export CPATH=${CPATH}:/usr/local/opt/tbb@2020_u3/include
export LIBRARY_PATH=${LIBRARY_PATH}:/usr/local/opt/tbb@2020_u3/lib
```
Then, create the build directory and build the project  
```
mkdir build && cd build
cmake ..
make
```
Add the `/build/` folder to `GAZEBO_PLUGIN_PATH`. You can find your full path of the project using `pwd`  
```
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:<full_path_to_build_folder>
```

### Running
```
gazebo UdacityOffice
```
