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
* tor
* proxychains
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

* this is a fairly minimal build of dwm that just tries to make the bar look clean and make pywal work seamlessly with some suckless utils 
* window management is left to the user to configure

# screenshot
![](https://0x0.st/-_cl.png)
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

--
if u want to help 
### todo

* working on a script, making pywal theming easier. 
* implementing that script on dmenu so its even faster to switch themes
* coming up with a solution to remove that mismatching rect on the bar as a result of the notitle patch. (that left over rect is not detected by pywal) the solution might be to add [this patch](https://dwm.suckless.org/patches/colorbar/) this way pywal can color it i hope. But the fkn patching is cancer
