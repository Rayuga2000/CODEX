device=$1 #/dev/sdb or /sdc

# change root
# arch-chroot /mnt

# MISC
ln -sf /usr/share/zoneinfo/Asia/Kolkata /etc/localtime
date
hwclock --systohc
nano /etc/locale.gen
locale-gen
echo "LANG=en_US.UTF-8" > /etc/locale.conf
echo "KEYMAP=us" > /etc/vconsole.conf
echo "Arch" > /etc/hostname

# add users
useradd -m -G wheel -s /bin/bash Rayuga
passwd
passwd Rayuga

EDITOR=nano visudo

systemctl enable NetworkManager

grub-install $device #${boot:0:-1}
grub-mkconfig -o /boot/grub/grub.cfg
nano /etc/default/grub
grub-mkconfig -o /boot/grub/grub.cfg

exit
