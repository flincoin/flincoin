# Flincoin Snap Packaging

Commands for building and uploading a Flincoin Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official Flincoin binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register flincoin-core
snapcraft upload \*.snap
sudo snap install flincoin-core
```

### Usage
```
flincoin-unofficial.cli # for flincoin-cli
flincoin-unofficial.d # for flincoind
flincoin-unofficial.qt # for flincoin-qt
flincoin-unofficial.test # for test_flincoin
flincoin-unofficial.tx # for flincoin-tx
```

### Uninstalling
```
sudo snap remove flincoin-unofficial
```