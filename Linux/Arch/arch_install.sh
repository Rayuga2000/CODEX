#!/bin/bash

boot=$1
root=$2
user=$3

echo "$boot $root $user"

# format partitions
mkfs.ext4 $root
mkfs.fat -F 32 $boot

# mount partitions
mount $root /mnt
mkdir -p /mnt/boot/efi
mount $boot /mnt/boot/efi

# install OS & softwares
pacstrap /mnt base base-devel linux linux-firmware sof-firmware grub efibootmgr nano git wget curl reflector networkmanager \
 intel-ucode fzf mpv gimp python-pip flatpak libreoffice-still firefox kitty

genfstab /mnt > /mnt/etc/fstab

# change root
arch-chroot /mnt

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
useradd -m -G wheel -s /bin/bash $user
passwd
passwd $user

EDITOR=nano visudo

systemctl enable NetworkManager

grub-install ${boot:0:-1}
grub-mkconfig -o /boot/grub/grub.cfg
nano /etc/default/grub

exit