mercury portable driver linux:
0. neofetch
1. lspci | grep wl
1. lsmod | grep wl
2. dmesg | grep usbcore
3. yay -R rtl8192su-git
4. dkms
5. yay -Ss kernel hearders
6. pacman -Qsq linux
7. uname -a
8. cd /etc/modprobe.d
9. nvi(nvim) r8188eu.conf
9. pacman -Qi ...
10. pacman -Qsq linux

Guo: every kernel you have need to use dkms for process the kernel's hearder

yay:
1. yay update
2. pacman -Ql 
3. yay -R ...

ydcv/crow:
# ydcv can't use these days, and we can go to github to see that Readme.md to connect youdao's API
# when ydcv can't use, Ghlin using some command to find the replace software:
1. yay -Ss google trans   ->  find trans_package that uses google's API -> find crow
2. yay -S crow-translate
3. pacman -Ql crow-translate | grep bin   ->   to find the executable files XXX which is ...bin/XXX
4. find its crow and use the command in terminal
5. use crow --help to find how to use it （查文档）
6. Mine its Chinese and he says my default language is that
7. we can use the parameter in tail : crow 你好 -t en    rather  crow -t zh-CN haha

other issus remember to solve:
1. htop
2. bpython
3. nmap
4. zsh proxy (alias)
5. emacs paul's config
6. daemon
7. 生成式
8. 清华源 pip cpython 源
9. port: 1086
10. wtf
11. zuida.me  -> for watching videos
12. ydcv
13. ScreenFetch LinuxLogo neofetch
14. oh-my-zsh's plugins
15. nvim  alias to nvi
16. vuip nfs
17. fzf 模糊搜索 -> using that in autojump(oh-my-zsh plugin) and add jj(ghlin's shell function) to it
18. tmux 终端复用工具
19. zgen -> manage oh-my-zsh plugins instead manual
20. jobcontrol
21. tty
22. bci技术
23. pacman / aur 下载位置
24. 清除无依赖软件包
25. lsmod
26. modprobelib
27. iw list
28. wicd   -> manage 网卡？
29. Lsusb
30. systemctl disable --now 
31. watch  
32. dmesage  -> using watch command to watch this for monitor mercury 网卡


