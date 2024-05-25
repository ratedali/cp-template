
if (CMAKE_CXX_COMPILER_ID  "(Clang)|(GNU)")
    add_compile_options(-Wall -Wextra -Wshadow -Wfloat-equal -Wconversion)
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_compile_options(
                -fsanitize=address,undefined
                -fno-omit-frame-pointer
                -fno-sanitize-recover=all
                -D_GLIBCXX_DEBUG
        )
        add_link_options(
                -fsanitize=address,undefined
                -fno-omit-frame-pointer)
    endif()
endif()
