1. go to arch-aur web to get the git clone URL
2. git clone URL
3. cd Downloads
4. cd program like google-chrome
5. build the package from the source using "makepkg" command: makepkg -s
6. the built package in google-chrome dir with extension .tar.xz.
	install it using pacman : sudo pacman -U google-chrome*.tar.xz

补充：1. makepkg 编译 .xz文件
      2. zsh 可以输入参数一个-点<enter>可以列出所有参数 exp: makepkg - <enter>
	  3. 手动下的东西可以pacman -Ql 进行查询 ： youdao-dict.git 查询怎么使用：sudo pacman -Ql youdao-dict | grep bin   : 发现bin/youdao-dict   故用youdao-dict 来使用
		ghlin：删除-R  我在想有没有别的参数
		yang: aur上发现最后更新在16年
