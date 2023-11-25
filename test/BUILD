load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "test",
    srcs = [
        "test.cpp",
    ],
    deps = [
        "//lib:demo-lib",
        "@com_google_googletest//:gtest_main",
    ],
)
