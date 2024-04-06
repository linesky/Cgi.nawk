printf "\x1bc\x1b[44;37m"
roots=$(pwd)/roots
mkdir -p $roots
mkdir -p $roots/usr
mkdir -p $roots/usr/bin
mkdir -p $roots/bin
mkdir -p $roots/tmp
mkdir -p $roots/lib
mkdir -p $roots/dev
mkdir -p $roots/boot
cp -p /usr/bin/bash $roots/usr/bin
cp -p /usr/bin/bash $roots/bin
cp -p /usr/bin/sh $roots/usr/bin
cp -p /usr/bin/sh $roots/bin
cp -p /usr/bin/date $roots/usr/bin
cp -p /usr/bin/date $roots/bin
cp -p /usr/bin/nano $roots/usr/bin
cp -p /usr/bin/nano $roots/bin
cp -p /usr/bin/grep $roots/usr/bin
cp -p /usr/bin/grep $roots/usr/bin
cp -p /usr/bin/grep $roots/bin
cp -p /usr/bin/sed $roots/usr/bin
cp -p /usr/bin/sed $roots/bin
chmod 777 $roots/bin/*
chmod 777 $roots/usr/bin/*
list1=$(ls $roots/usr/bin/*)
for l1 in $list1
do
printf "'---------------'\n$l1\n"
ldd "$l1"
done
