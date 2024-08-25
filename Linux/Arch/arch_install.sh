#!/bin/bash

boot=$1
root=$2

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
cat /mnt/etc/fstab