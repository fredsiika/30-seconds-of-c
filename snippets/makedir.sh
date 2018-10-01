#!/bin/sh
# zsh ft_mkdir_list.sh

string=(echo $MY_C_LIB)

if [ "$string" ]; then
	echo -e '$MY_C_LIB'| mkdir $@
fi

