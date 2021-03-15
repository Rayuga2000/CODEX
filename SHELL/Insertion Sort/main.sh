printf "Enter the size: "
read n

printf "Enter the Array: "
for((i=0;i<n;i++))
{
arr[i]=read a
}

echo ${arr[*]}
