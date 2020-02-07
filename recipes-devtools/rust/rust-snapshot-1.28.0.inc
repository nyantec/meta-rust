# Specifics for Rust 1.28.9

## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.28.0"

RUST_STD_SNAPSHOT = "rust-std-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
RUSTC_SNAPSHOT = "rustc-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
CARGO_VERSION = "0.28.0"
CARGO_SNAPSHOT = "cargo-${CARGO_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.gz;name=rust-std-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.gz;name=rustc-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.gz;name=cargo-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	"
SRC_URI[rust-std-snapshot-x86_64.md5sum] = "1c911cf792eb8bd847fd77ceb73bc6d7"
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "c5aed4c7ef362b5754526d26acaccdc9300942fd12e5cc67cc56fc89576a9dab"
SRC_URI[rustc-snapshot-x86_64.md5sum] = "b3ab0bdc2801c9d5b5434c266a42bd53"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "008bb3d714544bc991594b29a98a154441914c4771007130361bbadfb54143d0"
SRC_URI[cargo-snapshot-x86_64.md5sum] = "c04d9ce9ef7c8da9918b77b3c89dcb5b"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "35da884d43a8620534f6da1fbdd05f1e1f24823749f93d3d3be0eb46b3a6d884"
