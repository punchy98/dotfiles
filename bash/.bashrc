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

#-------------------------------BEGIN CUSTOM--------------------------------------#
#----Aliases----"
#set cat to bat with cat-like paging
if [ -n $(command -v bat) ]; then
    alias cat="bat --paging never"
fi

#if vimx is not installed set vim to default editor and set editor aliases
if [ -n $(command -v nvim) ]; then
    export EDITOR="nvim"
    alias vim="nvim"
    alias vi="nvim"
elif [ -n $(command -v vimx) ]; then  
    export EDITOR="vimx"
    alias vim="vimx"
    alias vi="vimx"
elif [ -n $(command -v vim) ]; then  
    export EDITOR="vim"
    alias vi="vim"
fi


# Don't put duplicate lines or lines starting with space in the history
HISTCONTROL="erasedups:ignoreboth"
# Commands that don't need to get recorded
export HISTIGNORE="&:[ ]*:exit:ls:bg:fg:history"
# Save multi-line commands to the history as one command
shopt -s cmdhist
# Append to the history file, don't overwrite it
shopt -s histappend
HISTSIZE=500000
HISTFILESIZE=100000
# Record each line of history right away
# instead of at the end of the session
PROMPT_COMMAND="${PROMPT_COMMAND:+$PROMPT_COMMAND ;} history -a"

#----Functions----#

# check ruby syntax in project folder recursively
checkrb() 
{
    for i in $(find . -name "*.rb"); do
        echo $i; 
        ruby -c $i;
    done
}


#move file and create directory
mvp()
{
    dir="$2" # Include a / at the end to indicate directory (not filename)
    tmp="$2"; tmp="${tmp: -1}"
    [ "$tmp" != "/" ] && dir="$(dirname "$2")"
    [ -a "$dir" ] ||
    mkdir -p "$dir" &&
    mv "$@"
}



#set terminal prompt
export PS1="\[$(tput bold)\]\[\033[38;5;1m\]\$(git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/')\[$(tput sgr0)\][\u@\h \[$(tput sgr0)\]\[\033[38;5;94m\]\w\[$(tput sgr0)\] ]\\$ \[$(tput sgr0)\]"




