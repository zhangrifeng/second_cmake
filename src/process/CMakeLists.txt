project(process)

# process要作为动态库
add_library(${PROJECT_NAME} SHARED
    process.cpp
)

# process库依赖pnc_map库,所以需要添加pnc_map库的头文件路径和链接pnc_map库
target_include_directories(${PROJECT_NAME} PUBLIC
    ${Pnc_Map_Dir}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    pnc_map
)
# 写了这行代码，process.cpp中加入头文件就不会报错了
target_link_libraries(${PROJECT_NAME} PUBLIC
    Eigen3::Eigen
)