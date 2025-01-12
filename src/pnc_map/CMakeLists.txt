project(pnc_map)

# pnc_map要生成动态库
add_library(${PROJECT_NAME} SHARED
    pnc_map.cpp
)
# 因为它不需要依赖其他库，所以不需要添加头文件路径