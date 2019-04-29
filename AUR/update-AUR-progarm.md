1. go to arch-aur web to get the git clone URL
2. git clone URL
3. cd Downloads
4. cd program like google-chrome
5. build the package from the source using "makepkg" command: makepkg -s
6. the built package in google-chrome dir with extension .tar.xz.
	install it using pacman : sudo pacman -U google-chrome*.tar.xz
