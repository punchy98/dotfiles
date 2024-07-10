#----Aliases----"
alias ports='netstat -tulanp'
#set cat to bat with cat-like paging
if hash bat 2>/dev/null; then
    alias cat="bat --paging never"
elif hash batcat 2>/dev/null; then
    alias cat="batcat --paging never"
fi

#if vimx is not installed set vim to default editor and set editor aliases
if hash nvim 2>/dev/null; then
    export EDITOR="nvim"
    export SUDO_EDITOR="nvim"
    export GIT_EDITOR="nvim"
    alias suvim="sudo -E nvim"
    alias vim="nvim"
    alias vi="nvim"
elif hash vimx 2>/dev/null; then  
    export EDITOR="vimx"
    export SUDO_EDITOR="vimx"
    export GIT_EDITOR="vimx"
    alias suvim="sudo -E vimx"
    alias vim="vimx --noplugin"
    alias vi="vimx --noplugin"
elif hash vim 2>/dev/null; then  
    export EDITOR="vim --noplugin"
    alias vi="vim --noplugin"
fi

alias ls="eza"
alias ll="eza -lahg"
alias l="eza"
alias btconn="bluetoothctl connect AC:12:2F:8E:FB:D9" 
alias qn="quicknote"
alias btdisconn="bluetoothctl disconnect AC:12:2F:8E:FB:D9" 
alias keyconn="bluetoothctl connect DC:2C:26:0A:4C:AC"
alias keeb="cd ~/dotfiles/keyboards/"
alias py="python3"
alias cdnotes="cd ~/notes/"
alias cdsans="cd ~/notes/002\ Learning/SANS_SEC503/"
alias cddown="cd ~/Downloads/"
alias cdcissp="cd ~/notes/002\ Learning/CISSP/"
alias open="xdg-open"
alias clare="clear"
alias claer="clear"
alias clera="clear"
alias clera="clear"
