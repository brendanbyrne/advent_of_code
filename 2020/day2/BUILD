cc_library(
    name = "day2",
    srcs = ["day2.cc"],
    hdrs = ["day2.hh"],
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
    deps = [":day2"],
)
