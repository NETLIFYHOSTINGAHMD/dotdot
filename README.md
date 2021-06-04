# dotdot

### programs

* iosevka font
* maim 
* curl
* xclip
* acpi 
* colrm
* iwgetid
* uptime 
* xsetroot
* wal/pywal
* compton
* dwm
* st
* mutt
* dmenu
* korn shell

### notes

* check if colors-wal-dwm.h is in .cache and also for the other suckless utils
* place dwmstatus and other scripts in home dir (including .xinitrc and .profile) 
* there might be a need to rename .mkshrc to .kshrc and place that file in home dir. Check if dwm or anything needs renaming to ksh 

#### encrypt your email password with mutt
source: https://unix.stackexchange.com/questions/20570/mutt-how-to-safely-store-password
Create a passwords file: ~/.mutt/passwords

set imap_pass="password"
set smtp_pass="password"

This file can be encrypted using GPG. First, create a public/private key pair:

$ gpg --gen-key$ gpg -r your.email@example.com -e ~/.mutt/passwords
$ ls ~/.mutt/passwords*
/home/user/.mutt/passwords   /home/user/.mutt/passwords.gpg
$ shred ~/.mutt/passwords
$ rm ~/.mutt/passwords

Add to your muttrc: (already added)

source "gpg -d ~/.mutt/passwords.gpg |"

