cc_library(
    name = "day2",
    srcs = ["day2.cc"],
    hdrs = ["day2.hh"],
    visibility = [":__subpackages__"],
)

cc_binary(
    name = "answer",
    srcs = ["main.cc"],
    deps = [":day2"],
)
