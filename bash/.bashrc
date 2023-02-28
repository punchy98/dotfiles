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
export GOPATH=$HOME/go
export PATH=$PATH:$GOROOT/bin:$GOPATH/bin
# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=
source ~/.bash_prompt
source ~/.bash_functions
source ~/.bash_aliases
#-------------------------------BEGIN CUSTOM--------------------------------------#
#---- BEGIN HISTORY MODIFICATIONS ----#
# Don't put duplicate lines or lines starting with space in the history
HISTCONTROL="erasedups:ignoreboth"
# Commands that don't need to get recorded
export HISTIGNORE="&:[ ]*:exit:ls:bg:fg:history"
# Save multi-line commands to the history as one command
shopt -s cmdhist
# Append to the history file, don't overwrite it
shopt -s histappend
HISTSIZE=500000
HISTFILESIZE=500000
# Record each line of history right away
# instead of at the end of the session
PROMPT_COMMAND="${PROMPT_COMMAND:+$PROMPT_COMMAND ;} history -a"
#---- END HISTORY MODIFICATIONS ----#

#set vi editing mode for bash
set -o vi

#set Control+l to clear screen - randomly became unbound
bind -x '"\C-l": clear;'

. "$HOME/.cargo/env"
export LD_LIBRARY_PATH=/opt/oracle/instantclient_21_9
. /home/punchy/.nix-profile/etc/profile.d/nix.sh
