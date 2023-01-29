/*Write a C/C++ program to that outputs the contents
of its Environment list*/


#include<stdio.h>
int main(int argc,char*argv[]){
int i;
char **ptr;
extern char **environ;
for(ptr=environ; *ptr!=0; ptr++)
printf("%s\n",*ptr);
return 0;
}


//output
/*
bmsce@bmsce-Precision-T1700:~$ nano contents.c
bmsce@bmsce-Precision-T1700:~$ gcc contents.c -o contents
bmsce@bmsce-Precision-T1700:~$ ./ contents
bash: ./: Is a directory
bmsce@bmsce-Precision-T1700:~$ ./ contents.c
bash: ./: Is a directory
bmsce@bmsce-Precision-T1700:~$ nano contents.c
bmsce@bmsce-Precision-T1700:~$ gcc contents.c -o contents
bmsce@bmsce-Precision-T1700:~$ ./ contents.c
bash: ./: Is a directory
bmsce@bmsce-Precision-T1700:~$ nano lncomm.c
bmsce@bmsce-Precision-T1700:~$ gcc contents.c -o asf
bmsce@bmsce-Precision-T1700:~$ ./asf
SHELL=/bin/bash
SESSION_MANAGER=local/bmsce-Precision-T1700:@/tmp/.ICE-unix/3733,unix/bmsce-Precision-T1700:/tmp/.ICE-unix/3733
QT_ACCESSIBILITY=1
COLORTERM=truecolor
XDG_CONFIG_DIRS=/etc/xdg/xdg-ubuntu:/etc/xdg
XDG_MENU_PREFIX=gnome-
GNOME_DESKTOP_SESSION_ID=this-is-deprecated
GTK_IM_MODULE=ibus
LANGUAGE=en_IN:en
QT4_IM_MODULE=xim
GNOME_SHELL_SESSION_MODE=ubuntu
SSH_AUTH_SOCK=/run/user/1000/keyring/ssh
XMODIFIERS=@im=ibus
DESKTOP_SESSION=ubuntu
SSH_AGENT_PID=3835
GTK_MODULES=gail:atk-bridge
XDG_SEAT=seat0
PWD=/home/bmsce
LOGNAME=bmsce
XDG_SESSION_DESKTOP=ubuntu
XDG_SESSION_TYPE=x11
PIG_HOME=/usr/local/pig
GPG_AGENT_INFO=/run/user/1000/gnupg/S.gpg-agent:0:1
XAUTHORITY=/run/user/1000/gdm/Xauthority
GJS_DEBUG_TOPICS=JS ERROR;JS LOG
WINDOWPATH=2
HOME=/home/bmsce
USERNAME=bmsce
IM_CONFIG_PHASE=2
LANG=en_IN
LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:
XDG_CURRENT_DESKTOP=ubuntu:GNOME
VTE_VERSION=5602
GNOME_TERMINAL_SCREEN=/org/gnome/Terminal/screen/6a3ca4f9_bf65_479b_ba30_676f1bbb31bd
CLUTTER_IM_MODULE=xim
GJS_DEBUG_OUTPUT=stderr
PYSPARK_PYTHON=/usr/bin/python3
QT_DEVICE_PIXEL_RATIO=auto
LESSCLOSE=/usr/bin/lesspipe %s %s
XDG_SESSION_CLASS=user
TERM=xterm-256color
LESSOPEN=| /usr/bin/lesspipe %s
USER=bmsce
GNOME_TERMINAL_SERVICE=:1.88
DISPLAY=:0
SHLVL=1
SPARK_HOME=/opt/spark
PT7HOME=/opt/pt
QT_IM_MODULE=ibus
XDG_VTNR=2
XDG_SESSION_ID=3
LD_LIBRARY_PATH=:/home/bmsce/ns-allinone-2.35/otcl-1.14/home/mca89/ns-allinone-2.35/lib:/opt/pt/lib
XDG_RUNTIME_DIR=/run/user/1000
TCL_LIBRARY=:/home/bmsce/ns-allinone-2.35/tcl8.5.10/library:/home/bmsce/ns-allinone-2.35/tcl8.5.10/library
XDG_DATA_DIRS=/usr/share/ubuntu:/usr/local/share:/usr/share:/var/lib/snapd/desktop
PATH=/home/bmsce/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/usr/local/pig/bin:/home/bmsce/ns-allinone-2.35/bin:/home/bmsce/ns-allinone-2.35/tcl8.5.10/unix:/home/mca89/ns-allinone-2.35/tk8.5.10/unix:/home/bmsce/softwares/XGraph4.38_linux64/bin:/opt/pt/bin:/opt/spark/bin:/opt/spark/sbin:/home/bmsce/ns-allinone-2.35/bin:/home/bmsce/ns-allinone-2.35/tcl8.5.10/unix:/home/mca89/ns-allinone-2.35/tk8.5.10/unix:/home/bmsce/softwares/XGraph4.38_linux64/bin:/opt/pt/bin:/opt/spark/bin:/opt/spark/sbin
GDMSESSION=ubuntu
DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus
_=./asf
*/
