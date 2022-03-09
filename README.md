# Tools for network scanning

## Installation

1. Copy the files to a place in your `$PATH`. Original path was `/home/<user>/.local/isec`, other paths are not tested.
2. Update your local paths in the following positions: `bin/ghidra`, `bin/sudo-arpscan-ip.c` (requires recompiling)
3. Adjust permissions: Every file that has no suffix (like `.c`) directly in `bin` should be executable. `bin/sudo-arpscan-ip` must be owned by `root` and have setuid bit set.
