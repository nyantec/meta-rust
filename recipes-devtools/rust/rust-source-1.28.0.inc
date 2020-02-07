# Specifics for Rust 1.28.1

SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.gz;name=rust"

SRC_URI[md5sum] = "80acd625df9389e16a88fc4f1d0f646b"
SRC_URI[sha256sum] = "1d5a81729c6f23a0a23b584dd249e35abe9c6f7569cee967cc42b1758ecd6486"
SRC_URI[rust.md5sum] = "80acd625df9389e16a88fc4f1d0f646b"
SRC_URI[rust.sha256sum] = "1d5a81729c6f23a0a23b584dd249e35abe9c6f7569cee967cc42b1758ecd6486"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=99c369ad81a36cd5b27f6c6968d01055"
