load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "hello",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
)

cc_test(
    name = "hello_test",
    srcs = ["hello_test.cc"],
    deps = [
        "hello",
        "@com_google_googletest//:gtest_main",
    ],
)
