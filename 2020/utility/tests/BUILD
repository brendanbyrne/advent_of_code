filegroup(
    name = "input",
    srcs = ["input.txt"],
    visibility = [":__subpackages__"]
)

cc_test(
    name = "io",
    srcs = ["io.cc"],
    data = [":input"],
    deps = [
        "//2020/utility:io",
        "@gtest//:gtest",
        "@gtest//:gtest_main",
    ],
)
