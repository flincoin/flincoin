
Debian
====================
This directory contains files used to package flincoind/flincoin-qt
for Debian-based Linux systems. If you compile flincoind/flincoin-qt yourself, there are some useful files here.

## flincoin: URI support ##


flincoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install flincoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your flincoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/flincoin128.png` to `/usr/share/pixmaps`

flincoin-qt.protocol (KDE)

