cc_library(
    name = "day1",
    srcs = ["day1.cc"],
    hdrs = ["day1.hh"],
    visibility = [":__subpackages__"],
)

cc_binary(
    name = "answer",
    srcs = ["answer.cc"],
    deps = [
        ":day1",
        "//2020/utility:io",
    ],
)
