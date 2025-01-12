cmake_minimum_required(VERSION 3.10.0)
project(planning
    VERSION 0.0.1
    LANGUAGES CXX
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/zhangrifeng/second_cmake"
)

set(CMAKE_CXX_STANDARD 17)

# 变量设置，设置可执行文件输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# 设置变量Process_Dir为src/process目录,PROJECT_SOURCE_DIR和CMAKE_SOURCE_DIR是cmake内置变量，表示工程根目录
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

# 添加子目录，进入src目录，执行src目录下的CMakeLists.txt，这样就可以编译src目录下的源文件，生成可执行文件
add_subdirectory(src)