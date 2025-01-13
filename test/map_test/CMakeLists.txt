project(map_test)

add_executable(${PROJECT_NAME} map_test.cpp)

# 添加要测试那部分的，头文件路径和链接库
target_include_directories(${PROJECT_NAME} PUBLIC
    ${Pnc_Map_Dir}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    pnc_map
)

add_test(
    NAME map_info_test
    COMMAND ${PROJECT_NAME}
)