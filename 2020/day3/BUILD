cc_library(
    name = "day3",
    srcs = ["day3.cc"],
    hdrs = ["day3.hh"],
    visibility = [":__subpackages__"],
)

filegroup(
    name = "input",
    srcs = ["input.txt"],
    visibility = [":__subpackages__"],
)

cc_binary(
    name = "answer",
    srcs = ["answer.cc"],
    data = [":input"],
    deps = [
        ":day3",
        "//2020/utility:io",
    ],
)
