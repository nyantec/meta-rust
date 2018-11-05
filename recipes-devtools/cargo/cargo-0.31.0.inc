CARGO_SNAPSHOT = "cargo-0.31.0-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI[cargo-snapshot-x86_64.md5sum] = "b3229879d93765ebbd0520f309ad26eb"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "fe03acbd158d680bbdd8009b242b5ee49a7deab129345ce9c539d7c523c22db0"

SRC_URI += "\
    https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.gz;name=cargo-snapshot-${BUILD_ARCH} \
"

# When building cargo-native we don't have a built cargo to use so we must use
# the snapshot to bootstrap the build of cargo
CARGO_class-native = "${WORKDIR}/${CARGO_SNAPSHOT}/cargo/bin/cargo"
