inherit cargo_util

SRC_URI = "git://github.com/jmesmon/rust-hello-world.git;protocol=https"
SRCREV="e0fa23f1a3cb1eb1407165bd2fc36d2f6e6ad728"
LIC_FILES_CHKSUM="file://COPYRIGHT;md5=e6b2207ac3740d2d01141c49208c2147"

SUMMARY = "Hello World by Cargo for Rust"
HOMEPAGE = "https://github.com/jmesmon/rust-hello-world"
LICENSE = "MIT | Apache-2.0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native"
