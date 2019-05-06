截图：sudo pacman -S deepin-screenshot
TIM : sudo pacman -S deepin-wine-tim     ? 感觉在AUR 
搜狗输入法（虽然我用IBus） fcitx-im fcitx-configtool fcitx-sogoupinyin
	sudo vim ~/.xprofile   export GTK_IM_MOUDULE=fcitx 
						   export QT_IM_MOUDLE=fcitx
						   export XMODIFIERS="@im=fcitx"
markdown: yay -S typora
福昕：foxit

有道:

wtf
cowsay fortune sl lolcat
满大人

更新源 记着syyu

shadowsocksrr-libev  / electron-ssr

配置terminator vim 可以自己加插件(杨氏极度推崇emacs paul写的他拿过去改了)



以下剽来：
https://whoisnian.com/2017/04/07/ArchLinux%E4%BD%BF%E7%94%A8%E8%AE%B0%E5%BD%95/
http://linux265.com/news/3544.html

*********************************************************************************************
安装完Manjaro后我们一般都要做那些配置呢，请参考下面的教程：

1、配置国内源

$ sudo  pacman-mirrors -i -c China -m rank  # 勾选科大源(USTC那个)
2、升级系统

$ sudo pacman -Syy && sudo pacman -Syu
3、安装Vim

$ sudo pacman -S vim
4、添加Archlinuxcn源

$ sudo vim /etc/pacman.conf # 打开文件
# 在文件末尾添加以下两行
[archlinuxcn]
Server = https://mirrors.ustc.edu.cn/archlinuxcn/$arch
5、安装archlinuxcn签名钥匙(导入 GPG key，否则的话key验证失败会导致无法安装软件)

$ sudo pacman -Syy && sudo pacman -S archlinuxcn-keyring
6、安装sogou拼音输入法

$ sudo pacman -S fcitx-im # 安装fcitx 选择全部安装
$ sudo pacman -S fcitx-configtool # fcitx 配置界面
$ sudo pacman -S fcitx-sogoupinyin # 安装sogoupinyin
7、配置环境，中文输入(重启后生效)

$ sudo vim ~/.xprofile # 打开编辑.xprofile文件
# 在文件中加入以下两行代码
export GTK_IM_MODULE=fcitx
export QT_IM_MODULE=fcitx
export XMODIFIERS="@im=fcitx"
8、安装Google-Chrome浏览器

$ sudo pacman -S google-chrome
9、安装网易云音乐

$ sudo pacman -S netease-cloud-music
10、安装git (默认貌似就已经存在了)

$ sudo pacman -S git
11、安装配置oh my zsh

$ sudo pacman -S zsh
$ sh -c "$(curl -fsSL https://raw.github.com/robbyrussell/oh-my-zsh/master/tools/install.sh)" # 下载并配置ohmyzsh
$ chsh -s /bin/zsh  #更换默认bash，重启后生效
12、安装中文字体（可不选择）

$ sudo pacman -S --noconfirm wqy-microhei && fc-cache -fv
13、安装wps，及其字体

$ sudo pacman -S wps-office     # 安装wps
$ sudo pacman -S ttf-wps-fonts  # 安装wps字体
14、配置wps，使wps可以输入中文

$ sudo vim /usr/bin/wps     # 编辑wps配置文件
# 在 紧跟#!/bin/bash后添加下列三行
export GTK_IM_MODULE=fcitx
export QT_IM_MODULE=fcitx
export XMODIFIERS="@im=fcitx"
注销后再次登录输入法生效。

15、安装Shadowsocks-qt5，实现科学上网

$ sudo pacman -S shadowsocks-qt5
16、安装VSCode

$ sudo pacman -S visual-studio-code
17、安装markdown编辑器

$ sudo pacman -S typora
18、配置jdk环境变量

# 配置环境变量
# sudo vim /etc/profile #编辑文件
# 在文件末尾处追加下列几行
export JAVA_HOME=你的jdk解压后的绝对路径 
export JRE_HOME=${JAVA_HOME}/jre  
export CLASSPATH=.:${JAVA_HOME}/lib:${JRE_HOME}/lib  
export  PATH=${JAVA_HOME}/bin:$PATH
19、安装终端显示信息neofetch(装b神器,安装screenfetch也可)

$ sudo pacman -S neofetch
20、安装Tim,微信 (KDE桌面无法使用)

$ sudo pacman -S deepin.com.qq.office deepin.com.wechat
21、配置微信，tim的中文输入问题 (KDE桌面无法使用)

Tim启动脚本位置：/opt/deepinwine/apps/Deepin-TIM/run.sh WeChat启动脚本位置：/opt/deepinwine/apps/Deepin-WeChat/run.sh # 1 配置tim中文，打开tim启动脚本文件 （微信同理）
$ sudo vim /opt/deepinwine/apps/Deepin-TIM/run.sh
# 2 在启动脚本命令之前添加以下内容
export GTK_IM_MODULE=fcitx
export QT_IM_MODULE=fcitx
export XMODIFIERS="@im=fcitx"
22、安装Deepin Terminal(终端)，安装完成之后，自行在deepin-terminal更改显示字体

$ sudo pacman -S deepin-terminal
23、安装有道词典

$ sudo pacman -S youdao-dict
24、安装vokoscreen录屏

$ sudo pacman -S vokoscreen
25、安装MariaDb代替mysql(MyriaDb与Mysql相互兼容)

$ sudo pacman -S mariadb mariadb-clients
# 安装成功后，根据提示，输入下列指令初始化MariaDb数据库
$ sudo mysql_install_db --user=mysql --basedir=/usr --datadir=/var/lib/mysql
# 一番信息自动输出完成后，执行以下代码
$ sudo systemctl start mysqld # 启动MariaDb
$ mysqladmin -u root password "root" # 为root、用户添加密码
$ sudo systemctl enable mysqld # 设置mariaDb开机自启
$ mysql -uroot -p # 输入设置的的密码，登录数据库
***************************************************************************************************

ArchLinux使用记录
2017-04-07       ArchLinux
使用 ArchLinux 过程中的一些记录。

换源
在学校感觉清华源的速度还是蛮不错的，因此就把我的 Arch 上的源都换成清华源了。

添加 archlinux 源：
$ sudo vim /etc/pacman.d/mirrorlist
然后将内容改为：
  ##  
  ## Arch Linux repository mirrorlist  
  ##  
    
  ## China  
  Server = https://mirrors.tuna.tsinghua.edu.cn/archlinux/$repo/os/$arch  
  
添加 archlinuxcn 中文社区源：
$ sudo vim /etc/pacman.conf
在最后面添加：
[archlinuxcn]  
Server = https://mirrors.tuna.tsinghua.edu.cn/archlinuxcn/$arch  
然后导入 GPG key：
$ sudo pacman -Syy && sudo pacman -S archlinuxcn-keyring

常用软件
网页浏览器：
$ sudo pacman -S google-chrome
$ sudo pacman -S firefox firefox-i18n-zh-cn
科学上网：
$ sudo pacman -S shadowsocks
然后复制默认配置文件并修改：
$ cd /etc/shadowsocks
$ sudo cp example.json myconfig.json
$ sudo vim myconfig.json
启动时执行sudo systemctl start shadowsocks@myconfig即可。
系统网络设置中可以使用gfwlist.pac自动配置代理。（使用GenPAC每小时从GFWList更新一次）
socks转http代理：
$ sudo pacman -S privoxy
web缓存代理：
$ sudo pacman -S squid
音乐播放器：
$ sudo pacman -S netease-cloud-music
参考这里，在启动命令前加上env XDG_CURRENT_DESKTOP=DDE假装自己是Deepin，可解决KDE上网易云音乐托盘图标右键菜单无效的问题。
视频播放器：
$ sudo pacman -S vlc
图像查看器：
$ sudo pacman -S gwenview
图像编辑器：
$ sudo pacman -S gimp
PDF阅读器：
$ sudo pacman -S okular poppler-data
压缩包管理器：
$ sudo pacman -S ark
截屏工具：
$ sudo pacman -S spectacle或
$ sudo pacman -S flameshot
屏幕录制工具：
$ sudo pacman -S peek
Visual Studio Code: 
$ sudo pacman -S code
API测试工具：
$ sudo pacman -S postman-bin
TG桌面客户端：
$ sudo pacman -S telegram-desktop
相机：
$ sudo pacman -S kamoso
简单计算器：
$ sudo pacman -S kcalc
Markdown 编辑器：
$ sudo pacman -S typora
文本编辑器：
$ sudo pacman -S gvim
安装gvim主要是为了共享系统的剪切版和终端中vim的剪切版，还需要在.vimrc中添加：
set clipboard=unnamedplus
连接 5 GHz WiFi 热点：
$ sudo pacman -S crda
网络共享：
$ sudo pacman -S dnsmasq
多线程下载：
$ sudo pacman -S axel
录屏：
$ sudo pacman -S obs-studio
有道词典命令行翻译工具：
$ sudo pacman -S ydcv
输入法：
$ sudo pacman -S kcm-fcitx fcitx-rime fcitx-im
要想正常使用中文输入法，还需要在~/.xprofile中添加：
export GTK_IM_MODULE=fcitx  
export QT_IM_MODULE=fcitx  
export XMODIFIERS=@im=fcitx  
KDE应用程序风格（GTK）设置：
$ sudo pacman -S kde-gtk-config
KDE通知栏天气小部件：
$ sudo pacman -S plasma5-applets-weather-widget
KDE通知栏色温调节小部件：
$ sudo pacman -S plasma5-applets-redshift-control
KDE关闭按钮小部件：
$ sudo pacman -S plasma5-applets-active-window-control
KDE日历小部件（AUR）：
$ sudo pikaur -S plasma5-applets-eventcalendar
离线API文档：
$ sudo pacman -S zeal
私有云：
$ sudo pacman -S nextcloud-client
密码管理器：
$ sudo pacman -S keepassxc
带有编码转换的unzip：
$ sudo pacman -S unzip-iconv
IP扫描工具：
$ sudo pacman -S nmap
KDE全局菜单：
$ sudo pacman -S appmenu-gtk-module libdbusmenu-glib
参考这里，全局菜单在KDE自带的小部件中就可以找到，但对于一些应用程序需要额外操作才可以正常显示。
office套装：
$ sudo pacman -S wps-office ttf-wps-fonts
这里是我在ArchLinux上使用WPS Office时遇到的几个问题及解决方法。
配置
vim
fcitx-rime
bash
zsh
font
Repo: https://github.com/whoisnian/nian


