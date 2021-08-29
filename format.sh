sudo wipefs --all $1
sudo cfdisk $1

printf "Enter the Drive Name: "
read Dname

sudo mkfs.vfat -n "$Dname" $11

echo "Drive Formated"
