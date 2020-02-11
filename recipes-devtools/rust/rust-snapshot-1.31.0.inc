# Specifics for Rust 1.31.0

## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.31.0"

RUST_STD_SNAPSHOT = "rust-std-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
RUSTC_SNAPSHOT = "rustc-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
CARGO_VERSION = "0.31.0"
CARGO_SNAPSHOT = "cargo-${CARGO_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.gz;name=rust-std-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.gz;name=rustc-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.gz;name=cargo-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	"
SRC_URI[rust-std-snapshot-x86_64.md5sum] = "bb35f7648b97b098eed13eb6b5aaf0d3"
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "fe67a62c7a63acbf2458a36d7689ef41903187a472f0c28850f1fca7ea478da8"
SRC_URI[rustc-snapshot-x86_64.md5sum] = "34641885cbb775122d9d7d2926e3425d"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "5c4581f0fc05f0f5076db6231b0c1a4d27eb61c0b36bfb42d97243ad8f4e43a0"
SRC_URI[cargo-snapshot-x86_64.md5sum] = "bad665c07e73a3f3cfa7ec3b209737fc"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "bfbabba9a2c1717fe1ce68469ce2de7b4b94e44e6a165d50b77de7bf7515bdb6"
