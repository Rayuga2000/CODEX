#!/bin/bash

for((i=1;i<=5;i++))
do
  for((k=1;k<=5-i;k++))
  do
    printf " ">>main.txt;
  done
  for((j=1;j<=i;j++))
  do
    printf " *">>main.txt;
  done
  echo >>main.txt
done

for((i=1;i<=5;i++))
do
  for((j=1;j<=i;j++))
  do
    printf " ">>main.txt;
  done
  for((k=1;k<=5-i;k++))
  do
    printf " *">>main.txt;
  done
  echo >>main.txt
done