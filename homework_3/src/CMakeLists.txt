add_library(html_writer html_writer.cpp)
# add_library(image_browser image_browser.cpp)
add_executable(main main.cpp)
target_link_libraries(main html_writer)
# target_link_libraries(main image_browser)
install(TARGETS main
        DESTINATION ${CMAKE_SOURCE_DIR}/bin)
install(TARGETS html_writer
        DESTINATION ${CMAKE_SOURCE_DIR}/lib)
# install(TARGETS image_browser
        # DESTINATION ${PROJECT_SOURCE_DIR}/lib)