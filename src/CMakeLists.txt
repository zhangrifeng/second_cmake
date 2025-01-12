project(planning_main)

# 添加子目录，进入src目录，执行src目录下的CMakeLists.txt，这样就可以编译src目录下的源文件
add_subdirectory(pnc_map)
add_subdirectory(process)

# 因为main.cpp文件在src目录下，所以编译成可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

# 添加头文件路径,因为头文件在src/process目录下,在父类CMakeLists定义的变量Process_Dir可以直接使用
target_include_directories(${PROJECT_NAME} PUBLIC
    ${Process_Dir}
)
# target_include_directories(${PROJECT_NAME} PUBLIC
#     ${Pnc_Map_Dir}
# )

# 链接动态库
target_link_libraries(${PROJECT_NAME} PUBLIC
    process
    # pnc_map
)