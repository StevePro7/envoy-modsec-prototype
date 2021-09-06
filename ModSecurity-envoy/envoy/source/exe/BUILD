load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

#TODO
#envoy_cc_binary(
#    name = "envoy",
#    repository = "@envoy",
#    deps = [
#        ":http_filter_config",
#        "@envoy//source/exe:envoy_main_entry_lib",
#    ],
#)

cc_binary(
    name = "envoy-static",
    srcs = ["main.cc"],
    deps = ["envoy-library"],
)

cc_library(
    name = "envoy-library",
    srcs = ["http_filter.cc"],
    hdrs = ["http_filter.h"]
)