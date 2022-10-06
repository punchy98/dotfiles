#!/bin/bash
# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

# User specific environment
if ! [[ "$PATH" =~ "$HOME/.local/bin:$HOME/bin:" ]]
then
    PATH="$HOME/.local/bin:$HOME/bin:$PATH"
fi
export PATH

# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=

# User specific aliases and functions
if [ -d ~/.bashrc.d ]; then
	for rc in ~/.bashrc.d/*; do
		if [ -f "$rc" ]; then
			. "$rc"
		fi
	done
fi

unset rc



alias vim='vimx'
alias vi='vimx'


#functions

checkrb(){
    for i in $(find . -name "*.rb"); do
        echo $i; 
        ruby -c $i;
    done
}
export PS1="\[$(tput bold)\]\[\033[38;5;1m\]\$(git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/')\[$(tput sgr0)\][\u@\h \[$(tput sgr0)\]\[\033[38;5;94m\]\w\[$(tput sgr0)\] ]\\$ \[$(tput sgr0)\]"




